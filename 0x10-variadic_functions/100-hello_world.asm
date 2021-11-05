; Hello World x64 Assembly
; Linux System Call Method

section .data                           
    msg db "Hello World" 
    len equ $-msg           
section .text               
    global _start           
_start:                 
    mov rax,1           ;system call number (sys_write)
    mov rdi,1           ;file descriptor (stdout)
    mov rsi,msg         ;string arg
    mov rdx,len         ;length of string arg
    syscall             ;call kernel
 
    mov rax,60          ;system call number (sys_exit)
    xor rdi,rdi         ;clear destination index register
    syscall             ;call kernel
end:    
