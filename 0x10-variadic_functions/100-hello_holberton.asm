section .rodata
	puntero:	db "Hello, Holberton", 10
	punterolen: equ $-puntero

section .text
	global main

	main:
		; write(1, msg, msglen)
		mov rax, 1
		mov rdi, 1
		mov rsi, puntero
		mov rdx, punterolen
		syscall
		; return 0

		mov rax, 0
		ret

