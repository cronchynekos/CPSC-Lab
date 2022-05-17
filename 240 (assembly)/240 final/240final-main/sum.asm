
;Nathanael kim
extern printf
extern scanf
global _sum                             ; Makes function callable from other linked files.

section .data



section .bss

section .text

_sum:

extern printf
extern scanf
global _sum                             ; Makes function callable from other linked files.

section .data
          welcome db "Welcome to HSAS. The accuracy and reliability of this program is guaranteed by Nathanael Kim", 10, 0


section .bss

section .text

_sum:

; Back up all registers to stack and set stack pointer to base pointer
push rbp
mov rbp, rsp
push rdi
push rsi
push rdx
push rcx
push r8
push r9
push r10
push r11
push r12
push r13
push r14
push r15
push rbx
pushf

push qword -1                           ; Extra push onto stack to make even # of pushes.

mov r15, rdi                            ; Copies array that was passed to r15.
mov r14, rsi                            ; Copies number of elements in the array to r14.
mov r13, 0                              ; Sum register to add elements of array to.
cvtsi2sd xmm14, r13
mov r12, 0                              ; Counter to to iterate through array.

;-----------------------------------START LOOP----------------------------------------------
begin_loop:

; Compares the counter (r12) to the number of elements in the array (r14).
cmp r12, r14
jge outofloop

mov r11, 1
cvtsi2sd xmm15, r11

divsd xmm15, [r15 + 8 * r12]

addsd xmm14, xmm15

;--------------------------------COPY INTO ARRAY--------------------------------------------
; Adds element of array at index of r12 to the Sum of register r13.

addsd xmm15, [r15 + 8 * r12] ;adds every input and stores the sum in xmm14
inc r12                                 ; Increments counter r12 by 1.



; Restarts loop
jmp begin_loop

;----------------------------------END OF LOOP----------------------------------------------
outofloop:

cvtsi2sd xmm13, r12
divsd xmm13, xmm15
;divsd xmm13, [r15 + 8 * r12]

; Restores all backed up registers to their original state.
pop rax                                ; Remove extra push of -1 from stack.


movsd xmm0, xmm14

popf
pop rbx
pop r15
pop r14
pop r13
pop r12
pop r11
pop r10
pop r9
pop r8
pop rcx
pop rdx
pop rsi
pop rdi
pop rbp

ret
