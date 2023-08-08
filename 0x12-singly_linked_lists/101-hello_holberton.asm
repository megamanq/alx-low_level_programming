section .data
    hello db 'Hello, Holberton', 0x0A ; String to print, 0x0A is newline

section .text
    global _start

_start:
    ; Write to stdout (file descriptor 1)
    mov rax, 1                  ; syscall number for sys_write
    mov rdi, 1                  ; file descriptor 1 (stdout)
    mov rsi, hello             ; address of the string to print
    mov rdx, 18                ; length of the string
    syscall

    ; Exit the program
    mov rax, 60                ; syscall number for sys_exit
    xor rdi, rdi               ; return code 0
    syscall
