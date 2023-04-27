section .text
global main

main:
	MOV rax, 1
	MOV rdi, 1
	MOV rsi, msg
	MOV rdx, msglen
	SYSCALL

	MOV rax, 60
	MOV rdi, 0
	SYSCALL

section .rodata
	msg: DB "Hello, Holberton", 10
	msglen: EQU $ - msg
