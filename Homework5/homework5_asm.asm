;****************************************************************
; homework5_asm.asm: Assembly starter code for homework 5 assignment.
;
; Created by Zhao Zhang for ECE 266, fall 2020
;****************************************************************

; include the C declarations in homework5.h in this assembly program
                .cdecls "homework5.h"

                .text

;****************************************************************
; int32_t ssat10Bits(int32_t n);
;   saturate a 32-bit signed integer to 10-bit
;****************************************************************
                .global ssat10Bits
ssat10Bits      .asmfunc
				SSAT r2, #11,r1
				BX lr
                ; don't forget function return
                .endasmfunc


;****************************************************************
;   uint32_t usat10Bits(uint32_t n)
;   saturate a 32-bit unsigned integer to 10-bit
;****************************************************************
                .global usat10Bits
usat10Bits      .asmfunc
				USAT	r2,#11,r1
				BX lr
                ; don't forget function return
                .endasmfunc


;****************************************************************
; uint32_t rev16ForByte(uint32_t n)
;   Reverse byte ordering within halfword.
;****************************************************************
                .global reverseByte
rev16ForByte    .asmfunc
				REV16	r2,r0
				BX lr
                ; don't forget function return
                .endasmfunc


;****************************************************************
; int32_t signExt8to32(int8_t n)
;   sign-extend from 8-bit to 32-bit. 
;****************************************************************
                .global signExt8to32
signExt8to32    .asmfunc
				SXTB	r1, r0
				BX lr
                ; don't forget function return
                .endasmfunc


;****************************************************************
; uint32_t rotateRight8(uint32_t n)
;   Rotate right by 8 bits. 
;****************************************************************
                .global rotateRight8
rotateRight8    .asmfunc
				ROR	r1,r0
				BX lr
                .endasmfunc


;****************************************************************
; int32_t multiply17(int32_t x)
;   Multiply by 17, must NOT use any multiply instruction. Hint:
;   Use an ADD instruction with built-in shift.
;****************************************************************
                .global multiply17
multiply17      .asmfunc
				ADD r1, r0,r0, LSL #4
				BX lr
                .endasmfunc

; Do NOT forget the function return in each of the above functions.
;
; The following is a catch-up function return.  With your solution
; code, the program execution should not reach here.
                BX    lr
