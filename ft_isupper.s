global _ft_isupper

section .text

_ft_isupper:
	xor eax, eax
	sub edi, 65
	cmp dil, 25
	setbe al
	ret
