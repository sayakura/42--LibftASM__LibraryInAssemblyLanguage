section .text 
    global _ft_putchar

_ft_putchar:
    push rdi 
    lea rsi, [rsp]
    mov rdi, 1
	mov rdx, 1
	mov rax, 0x2000004 ; mac = 2000000 + unix
	syscall
    cmp rax, -1
    jz .error
    pop rax
    ret 
.error:
    pop rdi
    mov rax, 0x00
    ret 