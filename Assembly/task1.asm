extern printf
extern scanf

section .data
  fmt_scanf db "%d",0
  fmt_res db "The result of your operation is %d",10,0
  fmt_resrem db "The remainder is %d",10.0
section .bss
section .text
	global main
main:
	push rbp
	mov rbp,rsp
	sub rsp,16
CHOOSENUM:
	mov rdi, fmt_scanf
	lea rsi, [rbp - 4]
	call scanf	 
	mov rsi, fmt_scanf
	lea rsi, [rbp - 8]
	call scanf
	mov rax, [rbp - 4]
	mov rbx, [rbp - 8]
CHOOSEOPER:
	mov rdi, fmt_scanf
	mov rsi, [rbp - 12]
	call scanf
	cmp qword[rbp - 12],1
	je ADD
	cmp qword[rbp - 12],2
	je SUB
 	cmp qword[rbp - 12],3
	je MUL
 	cmp qword[rbp - 12],4
	je DIV
	jmp CHOOSEOPER
ADD:
	add rax,rbx
	jmp ADD_END
SUB:
	sub rax,rbx
	jmp SUB_END
MUL:
	mul qword[rbx]
	jmp MUL_END
DIV:	
	xor rdx,rdx
	cmp qword[rbx],0
	je CHOOSENUM
	div qword[rbx]
	jmp DIV_END
ADD_END:
	mov rdi,fmt_res
	mov rsi, rax
	call printf
	jmp END
SUB_END:
	mov rdi,fmt_res
	mov rsi,rax
	call printf
	jmp END
MUL_END:
 	mov rdi,fmt_res
        mov rsi,rax
        call printf
        jmp END
DIV_END:
	mov rdi,fmt_res
        mov rsi,rax
        call print
	mov rdi,fmt_resrem
	mov rsi,rdx
	call printf
        jmp END

END:
	mov rsp,rbp
	pop rbp
	xor rax,rax
	ret
