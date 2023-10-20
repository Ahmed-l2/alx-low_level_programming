section .data
	hello db "Hello, Holberton", 0

section .text
	global main
	extern printf

main:
	mov edi, hello
	call printf
	mov	eax, 0
	xor eax, eax
	ret
