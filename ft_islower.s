global _ft_islower

section .text

_ft_islower:
	xor eax, eax
	sub edi, 97
	cmp dil, 25
	setbe al
	ret
