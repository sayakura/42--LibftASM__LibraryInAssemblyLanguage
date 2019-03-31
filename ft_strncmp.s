section .text
    global _ft_strncmp

_ft_strncmp:
.lp:
    mov al, byte [rdi]
    test al, al
    jz .diff
    dec edx
    test edx, edx
    jz .diff 
    sub al, byte [rsi]
    jnz .end
    inc rdi
    inc rsi
    jmp .lp
.diff:
    sub al, byte [rsi]
.end:
    movsx eax, al
    ret 

