global _ft_memset

section .text

_ft_memset: ;rdi, rsi, rdx
	mov rcx, rdx ; rdx as the counter
	mov eax, esi ; set al
	rep stosb
	ret
