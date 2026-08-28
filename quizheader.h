#include<lpc21xx.h>

typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;
typedef signed char s8;

extern void delay_ms(u32 ms);
extern void delay_sec(u32 sec);

extern void uart0_string(char *ptr);
extern u8 uart0_rx(void);
extern void uart0_tx(u8 data);
extern void uart0_init(u32 baud);
extern void  uart0_float(float num);
extern void uart0_integer(int num);
extern void uart0_rx_string(char *ptr);
extern int uart0_rx_integer(void);

extern void lcd_string(char *ptr);
extern void lcd_init(void);
extern void lcd_cmd(u32 cmd);
extern void lcd_data(u8 data);




