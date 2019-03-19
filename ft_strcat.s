global	_ft_strcat

section	.text

_ft_strcat:
	test	rdi, rdi
	jz		.end
	test	rdi, rdi
	jz		.end

	mov r11, rdi
	cld
	xor al, al

	xor rcx, rcx

	not rcx
	repne scasb
	dec rdi
	mov r10, rdi


	xor rcx, rcx

	mov rdi, rsi
	not rcx
	repne scasb
	not rcx

	mov rdi, r10
	rep movsb

	mov rax, r11
	ret

.end:
	mov rax, rdi
	ret
