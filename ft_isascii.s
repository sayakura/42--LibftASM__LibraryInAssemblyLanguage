global _ft_isascii

section .text

ALIGN 16

_ft_isascii:
	shr edi, 7
	setz al
	movzx eax, al
	ret
