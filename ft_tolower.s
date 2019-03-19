extern _ft_isupper

section .text
	global _ft_tolower

_ft_tolower:
	push rdi
	call _ft_isupper
	pop rdi
	mov rsi, rdi
	or 	rsi, 00100000b
	test eax, eax
	cmovnz rdi, rsi
	mov rax, rdi
	ret

; _ft_tolower:
; 	push rdi
; 	call _ft_isupper
; 	test eax, eax
; 	jz .not_upper
; 	pop rax
; 	or rax, 00100000b
; 	ret

; .not_upper:
; 	pop rax
; 	ret
