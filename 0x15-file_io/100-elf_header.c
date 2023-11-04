#include "main.h"
#include <elf.h>

/**
 * print_magic - prints elf header magic
 * @elf_header: elf header structure
 */

void print_magic(Elf64_Ehdr elf_header)
{
	int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_header.e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
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
			printf("none");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		default:
			printf("unknown: %x>", elf_header.e_ident[EI_CLASS]);
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
			printf("none");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		default:
			printf("unknown: %x>", elf_header.e_ident[EI_CLASS]);
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
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

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
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
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
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		default:
			printf("<unknown: %x>", elf_header.e_ident[EI_OSABI]);
	}
	printf("\n");
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
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relcatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (EXecutable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknow>: %x", ptr[i]);
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
		i = elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
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
		len = elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[i])
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
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);

	bytes = read(file, &elf_header, sizeof(elf_header));
	if (bytes < 1 || bytes != sizeof(elf_header))
		dprintf(STDERR_FILENO, "Can't read file: %s\n", argv[1]), exit(98);

	if (elf_header.e_ident[0] == 127 && elf_header.e_ident[1] == 'E' &&
			elf_header.e_ident[2] == 'L' && elf_header.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Error: Not ELF file\n"), exit(98);

	print_magic(elf_header);
	print_class(elf_header);
	print_data(elf_header);
	print_version(elf_header);
	print_osabi(elf_header);
	print_abiversion(elf_header);
	print_type(elf_header);
	print_entry(elf_header);

	if (close(file))
		dprintf(STDERR_FILENO, "Error closing file: %d\n", file), exit(98);
	return (EXIT_SUCCESS);
}
