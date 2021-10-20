/*
	Name: chapter 3_1
	Copyright: tamttung
	Author: tamttung
	Date: 20-10-21 09:47
	Description: chapter 3 data type( short, unsigned short - overflow )
*/


#include<stdio.h>

int main(void)
{
	short num1 = 32767;
	short num2 = -32768;
	unsigned short num3 = 65535;
	unsigned short num4 = 0;
	
	num1 = num1 + 1;
	num2 = num2 - 1;
	num3 = num3 + 1;
	num4 = num4 - 1;
	
	printf("num1 %d\n", num1);
	printf("num2 %d\n", num2);
	printf("num3 %d\n", num3);
	printf("num4 %d\n", num4);
	
	return 0;
}

