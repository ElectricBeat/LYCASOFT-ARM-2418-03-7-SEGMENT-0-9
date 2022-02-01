#include<lpc21xx.h>
#include "LPC2148_delay.h"

int a[]={0x3f,0X06,0X5b,0X4F,0X66,0x6d,0x7d,0x07,0x7f,0x6f};
int main()
{
	int i;
	
	PINSEL2 = 0;
	IODIR1 = 0x00ff0000;
	
	while(1)
	{
		for(i=0;i<10;i++)
		{
			IOSET1=a[i]<<16;
			delay(1000);
			IOCLR1=a[i]<<16;
		}
	}
}
