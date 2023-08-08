section .data
    message db "Hello, Holberton", 10

section .text
global main
main:
    ; Prepare syscall parameters
    mov rax, 1         ; System call number: write
    mov rdi, 1         ; File descriptor: stdout
    lea rsi, [message] ; Load address of message
    mov rdx, 17        ; Message length

    ; Make the syscall
    syscall

    ; Exit the program
    mov rax, 60        ; System call number: exit
    xor rdi, rdi       ; Exit status: 0
    syscall
