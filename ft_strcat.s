extern _ft_strlen

section .text
	global _ft_strcat

_ft_strcat:
	push	rdi

ignr:
	cmp	[rdi], byte 0
	je	cat
	inc	rdi
	jmp	ignr

cat:
	cmp	[rsi], byte 0
	je	end
	movsb
	jmp	cat

end:
	pop	rax
	ret
