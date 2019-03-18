global _ft_isdigit

section .text

_ft_isdigit:
	xor			eax, eax
	sub			edi, '0'
	cmp			dil, 9
	setbe		al
	ret

; _ft_isdigit:
; 	sub edi, '0'
; 	cmp dil, 9
; 	setbe al
; 	movzx eax, al
; 	ret
