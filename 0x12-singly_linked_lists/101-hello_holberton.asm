; hello_holberton - a 64-bit program in assembly that prints a text followed by a new line.
;
; Return: 0

extern printf

section .text
	global main
main:
	push rbp

	mov rdi, format
	mov rsi, text
	mov rax, 0
	call printf

	pop rbp

	mov rax, 0
	ret

section .data
	text: db "Hello, Holberton", 0
	format: db "%s", 0xa, 0
