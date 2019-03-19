
section .text
	global _ft_bzero

_ft_bzero: ;rdi void *s, rsi signed int n
	mov rcx, rsi
	xor al, al
	rep stosb
	ret
