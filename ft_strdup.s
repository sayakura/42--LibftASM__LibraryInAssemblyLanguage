
extern	_malloc
extern	_ft_strlen
extern  _ft_memcpy

section .text
	global _ft_strdup

_ft_strdup:
	enter 0, 0

	push rdi
	call _ft_strlen
	inc rax
	push rax
	mov rdi, rax
	call _malloc
	test rax, rax
	jz .end

	mov rdi, rax
	pop rdx
	pop rsi
	call _ft_memcpy
.end:
	leave
	ret

