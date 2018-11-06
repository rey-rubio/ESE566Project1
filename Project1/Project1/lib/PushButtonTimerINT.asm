;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: PushButtonTimerINT.asm
;;   Version: 2.6, Updated on 2015/3/4 at 22:27:47
;;  Generated by PSoC Designer 5.4.3191
;;
;;  DESCRIPTION: Timer16 Interrupt Service Routine
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "m8c.inc"
include "memory.inc"
include "PushButtonTimer.inc"


;-----------------------------------------------
;  Global Symbols
;-----------------------------------------------
export  _PushButtonTimer_ISR


AREA InterruptRAM (RAM,REL,CON)

;@PSoC_UserCode_INIT@ (Do not change this line.)
;---------------------------------------------------
; Insert your custom declarations below this banner
;---------------------------------------------------

;------------------------
; Includes
;------------------------

	
;------------------------
;  Constant Definitions
;------------------------


;------------------------
; Variable Allocation
;------------------------


;---------------------------------------------------
; Insert your custom declarations above this banner
;---------------------------------------------------
;@PSoC_UserCode_END@ (Do not change this line.)


AREA UserModules (ROM, REL)

;-----------------------------------------------------------------------------
;  FUNCTION NAME: _PushButtonTimer_ISR
;
;  DESCRIPTION: Unless modified, this implements only a null handler stub.
;
;-----------------------------------------------------------------------------
;

_PushButtonTimer_ISR:

   ;@PSoC_UserCode_BODY@ (Do not change this line.)
   
   ;---------------------------------------------------
   ;---------------PUSHBUTTON TIMER ISR----------------
   ; We increment pushButtonDownTime
   ;---------------------------------------------------
   ;preserve registers
   push A
   push X
   mov A, reg[CUR_PP]
   push A
   
   inc [pushButtonDownTime]
   
   restore_PushButtonTimer_ISR:
   ;restore registers
   pop A
   mov reg[CUR_PP],A
   pop X
   pop A
   ;---------------------------------------------------
   ; Insert a lcall to a C function below this banner
   ; and un-comment the lines between these banners
   ;---------------------------------------------------
   
   ;PRESERVE_CPU_CONTEXT
   ;lcall _My_C_Function
   ;RESTORE_CPU_CONTEXT
   
   ;---------------------------------------------------
   ; Insert a lcall to a C function above this banner
   ; and un-comment the lines between these banners
   ;---------------------------------------------------
   ;@PSoC_UserCode_END@ (Do not change this line.)

   reti


; end of file PushButtonTimerINT.asm
