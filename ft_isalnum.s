global _ft_isalnum

section .text

_ft_isalnum:
	xor eax, eax

	sub edi, 48
	cmp dil, 9
	setbe al
	sub edi, 17
	and edi, -33
	cmp dil, 25
	setbe cl
	or al, cl
	ret

; _ft_isalnum:
; 	xor eax, eax

; 	mov esi, edi
; 	and edi, -33
; 	sub edi, 65
; 	cmp dil, 25
; 	setbe al
; 	sub esi, 48
; 	cmp si, 9
; 	setbe cl
; 	or al, cl
; 	ret
