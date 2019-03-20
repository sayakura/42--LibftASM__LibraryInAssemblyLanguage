section .text
    global _ft_strchr

_ft_strchr: ;rdi str, rsi c
    mov r10, rcx
    mov r11, rdi
    test rdi, rdi 
    jz .end
    mov al, sil
    
.lp: 
    cmp byte [rdi], al
    jz .end
    cmp byte [rdi], 0x00
    jz .null
    inc rdi
    jmp .lp

    
.null:
    xor rdi, rdi
.end:
    mov rax, rdi
    mov rcx, r10
    ret 

