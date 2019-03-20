section .data
    fmt db"%c %c",0x10,0
section .text
    global _ft_strcmp
extern _printf

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
