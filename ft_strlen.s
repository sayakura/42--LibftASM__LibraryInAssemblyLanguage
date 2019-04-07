global _ft_strlen

section .text

_ft_strlen:
	push rcx

	xor al, al
	mov rcx, -1
	cld			; clear direction flag, and the cmp flag
	repne scasb
	not rcx		; ~= rcx
	dec rcx		; dec count for \0
	mov rax, rcx

	pop rcx
	ret
