section .text
    global _ft_strcmp

_ft_strcmp:
    cmp byte [rsi], 0
    jz .end
    repne cmpsb 
    dec rdi
    dec rsi

.end:
    mov rax, rsi
    sub rax, rdi
    ret 
