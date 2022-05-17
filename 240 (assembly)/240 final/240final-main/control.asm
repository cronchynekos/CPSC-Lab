;Nathanael Kim



extern printf
extern scanf
extern _fill
extern display_array
extern _sum
extern isfloat

array_size equ 100                  ; Capacity limit for number of elements allowed in array.

global _control                 ; Makes function callable from other linked files.

section .data
    welcome db "Welcome to HSAS. The accuracy and reliability of this program is guaranteed by Nathanael Kim", 10, 0
    numsreceived db 10, "These numbers were received and placed into the array:", 10, 0
    stringNumFormat db "The sum of the numbers in this array is %1.8lf.", 10, 0
    sumprompt db 10, "The sum will now be returned to the main function.", 10, 0
    stringFormat db "%s", 0

section .bss
    intArray: resq 100                  ; Uninitialized array with 100 reserved qwords.

section .text

_control:

; Back up all registers and set stack pointer to base pointer
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

push qword -1                           ; Extra push to create even number of pushes

;-----------------------------INITIALIZE PARAMETERS-----------------------------------------
mov qword r14, 0                        ; Reserve register for number of elements in array.
mov qword r13, 0                        ; Reserve register for Sum of integers in array

;-------------------------------OPENING PROMPT------------------------------------------

;Display welcome message
mov qword rax, 0
mov qword rdi, welcome ;displays "Welcome to HSAS. The accuracy and reliability of this program is guaranteed by Nathanael Kim"
call printf

mov qword rdi, intArray                 ; Passes array into rdi register.
mov qword rsi, array_size               ; Passes the max array size into rsi register.
mov qword rax, 0
call _fill                              ; Calls funtion input_array.
mov r14, rax                            ; Saves copy of input_array output into r14.


mov qword rdi, stringFormat
mov qword rsi, numsreceived ;displays "These numbers were received and placed into the array:"
mov qword rax, 0
call printf                             ; Prints out received confirmation

;----------------------------DISPLAY SUM OF ARRAY--------------------------------------
; Calls display_array that prints out each integer in the array seperated by 1 space.

push qword 0
mov qword rdi, intArray                 ; Passes the array as first parameter.
mov qword rsi, r14                      ; Passes # of elements in the array stored in r14.
mov qword rax, 0
call display_array                      ; Calls display_array function.
pop qword rax


mov rdi, intArray                 ; Passes the array as first parameter.
mov rsi, r14                      ; Passes # of elements in the array stored in r14.
mov rax, 0
call _sum                                ; Function _sum to add all the integers in array.



push qword 0
mov rax, 1
mov rdi, stringNumFormat ;displays "The sum of the numbers in this array is %1.8lf."
call printf
pop rax


mov qword rax, 0
mov qword rdi, sumprompt ;displays "The sum will now be returned to the main function."
call printf


;---------------------------------END OF FILE-----------------------------------------------

;Restores all registers to their original state.
pop rax                                 ; Remove extra push of -1 from stack.
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
