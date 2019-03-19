extern _ft_islower

section .text
	global _ft_toupper

_ft_toupper:
	push rdi
	call _ft_islower
	pop rdi
	mov rsi, rdi
	and rsi, 11011111b
	test eax, eax
	cmovnz rdi, rsi
	mov rax, rdi
	ret
