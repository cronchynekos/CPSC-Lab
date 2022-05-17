; Nathanael Kim
extern printf
extern scanf
extern atof
extern isfloat

global _fill                ; Makes function callable from other linked files.

section .data
    instructionOnePrompt db "Please enter floating point numbers separated by ws.",10,
                         db "When finished press enter followed by cntl+D.",10,0
    stringFormat db "%s", 0

section .bss

section .text

_fill:

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

push qword -1                           ; Extra push to create even number of pushes

;-----------------------------INITIALIZE PARAMETERS-----------------------------------------
mov qword r15, rdi                      ; Address of array saved to r15.
mov qword r14, rsi                      ; Max number of elements allowed in array.
mov qword r13, 0                        ; Set counter to 0 elements in Array.


;Display instructionOnePrompt message
  mov qword rax, 0
  mov qword rdi, instructionOnePrompt ;"Please enter floating point numbers separated by ws."
  call printf






;---------------------------------START OF LOOP---------------------------------------------
begin_loop:

; Scanf function called to take user input.
mov qword rdi, stringFormat
push qword 0
mov qword rsi, rsp                      ; Stack pointer points to where scanf outputs.
mov qword rax, 0
call scanf

; Tests if Control + D is entered to finish inputing into array.
cdqe
cmp rax, -1
je end_of_loop                          ; If control + D is entered, jump to end_of_loop.

mov qword rax, 0
mov qword rdi, rsp
call isfloat
cmp rax, 0
je invalid_input

;---------------------------------ASCII TO LONG---------------------------------------------
; Converts string of characters (user input) into a long integer.

mov qword rax, 0
mov qword rdi, rsp
call atof
;movsd qword xmm13, xmm0                     ; Saves output long integer from atof in r12.
pop r8                                  ; Pop off stack into any scratch register.

;--------------------------------COPY INTO ARRAY--------------------------------------------
; Adds copy of long integer saved in r12 into array at index of counter (r13).
movsd xmm13, xmm0
movsd [r15 + 8 * r13], xmm13             ; Copies user input into array at index of r13.
inc r13                                 ; Increments counter r13 by 1.

;-----------------------------ARRAY CAPACITY TEST-------------------------------------------
; Tests to see if max array capacity has been reached.
cmp r13, r14                            ; Compares # of elements (r13) to capacity (r14).
je exit                                 ; If # of elements equals capacity, exit loop.

; Restarts loop.
jmp begin_loop


invalid_input:
pop r8
jmp begin_loop

;---------------------------------END OF LOOP-----------------------------------------------

; After control+D is entered the loop is skipped and so is the pop in the loop
; therefore this controlD block makes up for that missed pop.
end_of_loop:
pop r8                                  ; Pop off stack into any scratch register.

;------------------------------------EXIT---------------------------------------------------
exit:

; Restore all backed up registers to their original state.
pop rax                                 ; Remove extra push of -1 from stack.
mov qword rax, r13                      ; Copies # of elements in r13 to rax.
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
