#ifndef _A2_h_
#define _A2_h_
#include <util/delay.h>

/* Define LCD data port direction */
#define LCD_DIRECTION  DDRB		

/* Define LCD data port */
#define PORT_B PORTB	

/* Define Register Select pin */
#define LCD_RS PB2	

/* Define Enable signal pin */
#define LCD_EN PB3 	

void LCD_CMD( unsigned char command );
void LCD_CHAR_WISE( unsigned char ch );
void LCD_INITIALIZATION(void);
void LCD_DISPLAY (char *temperature_value);
void CLEAR_LCD();

void A2(void);
void InitADC(void);
uint16_t ReadADC(uint8_t ch);
#endif // _A2_h_
