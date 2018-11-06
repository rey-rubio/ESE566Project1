//*****************************************************************************
//*****************************************************************************
//  FILENAME:  LCD.h
//  Version: 1.5, Updated on 2010/6/8 at 12:37:12
//  Generated by PSoC Designer 5.4.3191
//
//  DESCRIPTION:  LCD User Module C Language interface file.
//-----------------------------------------------------------------------------
//      Copyright (c) Cypress Semiconductor 2010. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef LCD_INCLUDE
#define LCD_INCLUDE

#include <m8c.h>

#define LCD_BARGRAPH_ENABLE 0

/* Create pragmas to support proper argument and return value passing */
#pragma fastcall16  LCD_Start
#pragma fastcall16  LCD_Init
#pragma fastcall16  LCD_Control
#pragma fastcall16  LCD_WriteData
#pragma fastcall16  LCD_PrString
#pragma fastcall16  LCD_PrCString
#pragma fastcall16  LCD_PrHexByte
#pragma fastcall16  LCD_PrHexInt
#pragma fastcall16  LCD_Position
#pragma fastcall16  LCD_Delay50uTimes
#pragma fastcall16  LCD_Delay50u

#if ( LCD_BARGRAPH_ENABLE )
#pragma fastcall16  LCD_InitBG
#pragma fastcall16  LCD_DrawBG
#pragma fastcall16  LCD_InitVBG
#pragma fastcall16  LCD_DrawVBG
#endif

//-------------------------------------------------
// Prototypes of the LCD API.
//-------------------------------------------------

extern void  LCD_Start(void);
extern void  LCD_Init(void);
extern void  LCD_Control(BYTE bData);
extern void  LCD_WriteData(BYTE bData);
extern void  LCD_PrString(char * sRamString);
extern void  LCD_PrCString(const char * sRomString);
extern void  LCD_Position(BYTE bRow, BYTE bCol);
extern void  LCD_PrHexByte(BYTE bValue);
extern void  LCD_PrHexInt(INT iValue);

extern void  LCD_Delay50uTimes(BYTE bTimes);
extern void  LCD_Delay50u(void);

// Do not use, will be removed in future version.
extern void  LCD_Write_Data(BYTE bData);
#pragma fastcall16 LCD_Write_Data
//


#if ( LCD_BARGRAPH_ENABLE )
extern void  LCD_InitBG(BYTE bBGType);
extern void  LCD_InitVBG(void);
extern void  LCD_DrawVBG(BYTE bRow, BYTE bCol, BYTE bHeight, BYTE bPixelRowEnd);
extern void  LCD_DrawBG(BYTE bRow, BYTE bCol, BYTE bLen, BYTE bPixelColEnd);


#define LCD_SOLID_BG                        0x00
#define LCD_LINE_BG                         0x01


#endif

//-------------------------------------------------
// Defines for LCD API's.
//-------------------------------------------------
#define LCD_DISP_ON                         0x0C
#define LCD_DISP_OFF                        0x08
#define LCD_DISP_BLANK                      0x0A
#define LCD_DISP_CLEAR_HOME                 0x01
#define LCD_CURSOR_ON                       0x0E
#define LCD_CURSOR_OFF                      0x0C
#define LCD_CURSOR_WINK                     0x0D
#define LCD_CURSOR_BLINK                    0x0F
#define LCD_CURSOR_SH_LEFT                  0x10
#define LCD_CURSOR_SH_RIGHT                 0x14
#define LCD_CURSOR_HOME                     0x02
#define LCD_CURSOR_LEFT                     0x04
#define LCD_CURSOR_RIGHT                    0x06

#define LCD_PORT_MASK                       0x7F
//------------------------------------------------------
//  Register Address Constants for  LCD
//------------------------------------------------------

#define LCD_Port                          PRT2DR
#define LCD_PortMode0                     PRT2DM0
#define LCD_PortMode1                     PRT2DM1

#endif
// end of file LCD.h
