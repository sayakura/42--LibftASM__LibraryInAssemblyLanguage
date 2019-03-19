global _ft_memcpy

section .text

; rdi (void *restrict dst)
; rsi (void *restrict src)
; rdx (size_t n)
_ft_memcpy: ; Move (E)CX bytes from DS:[(E)SI] to ES:[(E)DI]
	mov rax, rdi
	mov rcx, rdx ; set cx
	rep movsb
	ret
