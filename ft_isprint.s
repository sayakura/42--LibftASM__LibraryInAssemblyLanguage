global _ft_isprint

section .text

_ft_isprint:
	xor eax, eax
	sub edi, 32
	cmp dil, 94
	setbe al
	ret
