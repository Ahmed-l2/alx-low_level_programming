#include "main.h"
#include <elf.h>

/**
 * print_magic - prints elf header magic
 * @elf_header: elf header structure
 */

void print_magic(Elf64_Ehdr elf_header)
{
	int j;

	printf("  Magic:   ");
	for (j = 0; j < EI_NIDENT; j++)
	{
		printf("%2.2x%s", elf_header.e_ident[j], j == EI_NIDENT - 1 ? "\n" : " ");
	}
}

/**
 * print_class - prints elf header class
 * @elf_header: elf header structure
 */

void print_class(Elf64_Ehdr elf_header)
{
	printf("  Class:                             ");
	switch (elf_header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("None");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
	}
	printf("\n");
}

/**
 * print_data - prints elf header data
 * @elf_header: elf header structure
 */

void print_data(Elf64_Ehdr elf_header)
{
	printf("  Data:                              ");
	switch (elf_header.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("None");
			break;
		case ELFDATA2LSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, little endian");
	}
	printf("\n");
}

/**
 * print_version - prints elf header version
 * @elf_header: elf header structure
 */

void print_version(Elf64_Ehdr elf_header)
{
	printf("  Version:                           %d",
			elf_header.e_ident[EI_VERSION]);
	switch (elf_header.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
			break;
	}
	printf("\n");
}

void print_osabi2(Elf64_Ehdr elf_header);

/**
 * print_osabi - prints elf header OS/ABI
 * @elf_header: elf header structure
 */

void print_osabi(Elf64_Ehdr elf_header)
{
	printf("  OS/ABI:                            ");
	switch (elf_header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - LINUX");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_osabi2(elf_header);
			break;
	}
	printf("\n");
}

/**
 * print_osabi2 - continuation of print_osabi
 * @elf_header: elf header structure
 */


void print_osabi2(Elf64_Ehdr elf_header)
{
	switch (elf_header.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", elf_header.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion - prints the elf header abi version
 * @elf_header: elf header structure
 */

void print_abiversion(Elf64_Ehdr elf_header)
{
	printf("  ABI Version:                       %d\n",
			elf_header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints elf header type
 * @elf_header: elf header structure
 */


void print_type(Elf64_Ehdr elf_header)
{
	char *ptr;
	int i = 0;

	ptr = (char *)&elf_header.e_type;
	printf("  Type:                              ");
	if (elf_header.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (ptr[i])
	{
		case ET_NONE:
			printf("NONE (No file type");
			break;
		case ET_REL:
			printf("REL (Relcatable file");
			break;
		case ET_EXEC:
			printf("EXEC (EXecutable file");
			break;
		case ET_DYN:
			printf("DYN (Shared object file");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknow>: %x", ptr[i]);
			break;
	}
	printf("\n");
}

/**
 * print_entry - prints ELF entry point address
 * @elf_header: elf header structure
 */

void print_entry(Elf64_Ehdr elf_header)
{
	int i = 0;
	int len = 0;
	unsigned char *ptr;

	ptr = (unsigned char *)&elf_header.e_entry;

	printf("  Entry point address:               0x");

	if (elf_header.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
			i = 7;
		else
			i = 3;
		while (!ptr[i])
			i--;
		printf("%x", ptr[i--]);
		for (; i >= 0; i--)
			printf("%02x", ptr[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
			len = 7;
		else
			len = 3;
		while (ptr[i])
			i++;
		printf("%x", ptr[i++]);
		for (; i <= len; i++)
			printf("%02x", ptr[i]);
		printf("\n");
	}
}

/**
 * main - entry point
 * Description: a program that displays the information contained in the ELF
 * header at the start of an ELF file.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int file;
	Elf64_Ehdr elf_header;
	ssize_t bytes;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(95);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(96);
	}

	bytes = read(file, &elf_header, sizeof(elf_header));
	if (bytes == -1 || bytes != sizeof(elf_header))
	{
		dprintf(STDERR_FILENO, "Can't read file: %s\n", argv[1]), exit(97);
	}

	if (elf_header.e_ident[0] == 0x7f && elf_header.e_ident[1] == 'E' &&
			elf_header.e_ident[2] == 'L' && elf_header.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);
	}

	print_magic(elf_header);
	print_class(elf_header);
	print_data(elf_header);
	print_version(elf_header);
	print_osabi(elf_header);
	print_abiversion(elf_header);
	print_type(elf_header);
	print_entry(elf_header);

	file = close(file);
	if (file == -1)
		dprintf(STDERR_FILENO, "Error closing file: %d\n", file), exit(99);
	return (0);
}
