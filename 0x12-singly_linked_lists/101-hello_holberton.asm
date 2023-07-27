section .data
    hello db "Hello, Holberton,", 0
    format db "%s", 10, 0   ; The format specifier for printf ("%s" for string, 10 for newline)

section .text
    global main
    extern printf       ; Declare the external function printf

main:
    ; Push the address of the format string onto the stack
    push format
    ; Call printf
    call printf
    ; Clean up the stack after the call
    add rsp, 8

    ; Exit the program with a return value of 0
    mov eax, 0
    ret

