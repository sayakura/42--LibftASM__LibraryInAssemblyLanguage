section .text
    global _ft_strcmp

_ft_strcmp:
.lp:
    mov al, byte [rdi]
    test al, al
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


; _strcmp:
;     movzx    eax, byte ptr [rdi]
;     movzx    ecx, byte ptr [rsi]
;     cmp    al, cl
;     jne    13 <_strcmp+0x17>
;     inc    rsi
;     inc    rdi
;     test    al, al
;     jne    -20 <_strcmp>
;     xor    eax, eax
;     ret
;     sub    eax, ecx
;     ret