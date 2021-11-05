section .data

	msg db  'Hello, world',0xa

section .text

global main
main:
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, 17
    syscall
