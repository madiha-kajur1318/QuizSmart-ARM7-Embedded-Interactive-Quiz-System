#include<lpc21xx.h>
#include"header1.h"
int option1(void);
int option2(void);
int option3(void);
int option4(void);
#define sw1 ((IOPIN0>>15)&1)
#define sw2 ((IOPIN0>>2)&1)
#define sw3 ((IOPIN0>>3)&1)
#define sw4 ((IOPIN0>>4)&1)
#define wl (1<<5)//wrong led  
#define cl (1<<6)//correct led 
int main()
{
int op;
IODIR0 |=(wl|cl);
//IOCLR0=(cl|wl);
//IODIR0 &= ~(sw1 | sw2 | sw3 |sw4);
lcd_init();
uart0_init(9600);
while(1)
{
uart0_string("\nenter the question num from below:\n");
uart0_string(" question 1\n");
uart0_string(" question 2\n");
uart0_string(" question 3\n");
uart0_string(" question 4\n");
uart0_string(" question 5\n");
uart0_string(" question 6\n");
uart0_string(" question 7\n");
uart0_string(" question 8\n");
uart0_string(" question 9\n");
uart0_string(" question 10\n");
op=uart0_rx_integer();	
uart0_string("\r\n");
switch(op)
{
case 1 : 
uart0_string("\nUART is\n");
uart0_string("A.Serial\n B.Sensor\n C.Memory\n D.Display\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==1)
	uart0_string("\r\ncorrect");
else
	uart0_string("\r\nincorrect");
break;
case 2 :
uart0_string("\n UART stands for\n");
uart0_string("A.Universal Asynchronus Reciver/Transmitter\n");
uart0_string("B.Universal Asynchronus Reciver\n");
uart0_string("C.Universal Asynchronus Transmitter\n");
uart0_string("D.Universal synchronus Reciver/Transmitter\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==1)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
case 3:
uart0_string("UART Baud rate\n");
uart0_string("A.9\n B.9600\n C.450\n D.9000\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==2)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
case 4:
uart0_string("UART is____comm protocol\n");
uart0_string("A.Synchrouns\n B.ASynchronous\n C.Parallel\n D.Wireless\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==2)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
case 5:
uart0_string("sky colour is\n");
uart0_string("A.red\n B.black\n C.blue\n D.yellow\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==3)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
case 6:
uart0_string("Water Formula\n");
uart0_string("A.o\n B.H0\n C.H20\n D.H\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==3)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
case 7:
uart0_string("Oxygen forula\n");
uart0_string("A.o4\n B.o\n C.o3\n D.o2\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==4)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
case 8:
uart0_string("APP_E find the missing letter\n");
uart0_string("A.w\n B.p\n C.t\n D.l\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==4)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
case 9:
uart0_string("UART tx's ____ bits of data at a time\n");
uart0_string("A.1\n B.2\n C.8\n D.16\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==1)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
case 10:
uart0_string(" UART is generally\n");
uart0_string("A.Full - dup\n B.half -dup \n C.simplex\n D.parallel\n");
lcd_cmd(0x01);
lcd_string("select option press the swicth:\n");
if(option1()==1)
	uart0_string("\r\ncorrect");
else
uart0_string("\r\nincorrect");
break;
default:
uart0_string("unknown choice\n");
break;
}
}
}
////////////////////////////////////////////////////////
int option1( )
{
	while(1)
	{
		if(sw1==0)
		{
			while(sw1==0);
			return 1;
		}
else if(sw2==0)
		{
			while(sw2==0);
			return 2;
		}
		else if(sw3==0)
		{
			while(sw3==0);
			return 3;
		}
		else if(sw4==0)
		{
			while(sw4==0);
			return 4;
		}
	}
}
///////////////////////////////////////////////////////////
int option2( )
{
	while(1)
	{
		if(sw1==0)
		{
			while(sw1==0);
			return 1;
		}
else if(sw2==0)
		{
			while(sw2==0);
			return 2;
		}
		else if(sw3==0)
		{
			while(sw3==0);
			return 3;
		}
		else if(sw4==0)
		{
			while(sw4==0);
			return 4;
		}
	}
}
///////////////////////////////////////////////////////////
int option3( )
{
	while(1)
	{
		if(sw1==0)
		{
			while(sw1==0);
			return 1;
		}
else if(sw2==0)
		{
			while(sw2==0);
			return 2;
		}
		else if(sw3==0)
		{
			while(sw3==0);
			return 3;
		}
		else if(sw4==0)
		{
			while(sw4==0);
			return 4;
		}
		}
}
///////////////////////////////////////////////////////////
int option4( )
{
	while(1)
	{
		if(sw1==0)
		{
			while(sw1==0);
			return 1;
		}
else if(sw2==0)
		{
			while(sw2==0);
			return 2;
		}
		else if(sw3==0)
		{
			while(sw3==0);
			return 3;
		}
		else if(sw4==0)
		{
			while(sw4==0);
			return 4;
		}
}
}
///////////////////////////////////////////////////////////

