global _ft_puts

extern _ft_strlen

section .text

_ft_puts:
	mov rsi, rdi
	call _ft_strlen
	mov rdi, 1
	mov rdx, rax
	mov rax, 0x2000004 ; mac = 2000000 + unix
	syscall

	mov rdx, 1
	mov rax, 0x2000004
	lea rsi, [rel nl]
	syscall
	ret

section .data
	nl db 0x0a
