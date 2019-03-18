global _ft_isalpha

section .text

_ft_isalpha:
	xor edx, edx
	xor eax, eax

	mov esi, edi
	sub esi, 65
	cmp si, 25
	setbe dl

	mov esi, edi
	sub esi, 97
	cmp si, 25
	setbe dh

	or dl, dh
	seta al
	ret
; extern _islower

; extern _isupper

; _ft_isalpha:
; 	push rdi
; 	call _islower
; 	pop rdi
; 	push rax
; 	call _isupper
; 	mov rdi, rax
; 	pop rax
; 	cmp rax, rdi
; 	setnz al
; 	movzx rax, al
; 	ret


