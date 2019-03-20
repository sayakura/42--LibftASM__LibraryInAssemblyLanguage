section	.text
	global	_ft_strcat

extern _ft_strlen

_ft_strcat:
	mov 	r10, rdi

	test	rdi, rdi
	jz		.end
	test	rsi, rsi
	jz		.end

	mov rdi, rsi
	call _ft_strlen
	mov r11, rsi
	add r11, rax

	mov rdi, r10

	call _ft_strlen
	mov rdi, r10
	add rdi, rax
	
.lp:
	add rdi, 8
	add rsi, 8
	cmp r11, rsi
	jl ._sub

	mov rax, [rsi - 8]
	mov [rdi - 8], rax
	jmp .lp

._sub:
	sub rdi, 8
	sub rsi, 8
.bad:
	cmp r11, rsi
	jz .null

	mov al, byte [rsi]
	mov byte [rdi], al
	add rdi, 1
	add rsi, 1
	jmp .bad

.null:
	mov byte [rdi], 0x00
.end:
	mov rax, r10
	ret 

; _ft_strcat:
; 	mov 	r10, rdi
; 	test	dil, dil
; 	jz		.end
; 	test	si, si
; 	jz		.end

; 	call _ft_strlen
; 	mov rdi, r10
; 	add rdi, rax
; .lp:
; 	cmp byte [rsi], 0x00
; 	jz .null

; 	mov rax, byte [rsi]
; 	mov byte [rdi], rax
; 	add rdi, 1
; 	add rsi, 1
; 	jmp .lp

; .null:
; 	mov byte [rdi], 0x00
; .end:
; 	mov rax, r10
; 	ret 










; broken ones
; 	xor rcx, rcx
; 	call _ft_strlen

; lp:
; 	cmp rsi, 0x00
; 	jz .end
	
; 	inc rax
; 	jmp lp


	; mov r11, rdi
	; cld
	; xor al, al

	; xor rcx, rcx

	; not rcx
	; repne scasb
	; dec rdi
	; mov r10, rdi


	; xor rcx, rcx

	; mov rdi, rsi
	; not rcx
	; repne scasb
	; not rcx

	; mov rdi, r10
	; rep movsb

	; mov rax, r11
	; ret

; .end:
; 	mov rax, rdi
; 	ret


