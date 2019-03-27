section .text
    global _ft_strcmp

_ft_strcmp:
.lp:
    mov al, byte [rdi]
    test al, al
    jz .end
    cmp al, byte [rsi]
    jnz .end
    inc rdi
    inc rsi
    jmp .lp

.end:
    movzx rax, byte [rdi]
    movzx rsi, byte [rsi]
    sub rax ,rsi
    ret 
