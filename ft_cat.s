%define BUFF_SIZE	64
%define STDOUT 	1
%define READ 0x2000003
%define WRITE 0x2000004
%macro _syscall_4 4
	mov rdi, %2
	mov rsi, %3
	mov rdx, %4
	mov rax, %1
	syscall
%endmacro

section .text
	global _ft_cat

_ft_cat:			; rdi - int fd
	enter 0, 0
	push rbx
	sub rsp, BUFF_SIZE
	mov rbx, rdi

.while:
	_syscall_4 READ, rbx, rsp, BUFF_SIZE - 1

	jc .end 		; check errpr
	test rax, rax	; read nothing
	je .end

	_syscall_4 WRITE, STDOUT, rsp, rax
	jmp .while

.end:
	add rsp, BUFF_SIZE
	pop rbx
	leave
	ret
