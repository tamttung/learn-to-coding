
/*
	Name: chapter6_1
	Copyright: tamttug
	Date: 01-11-21 10:24
	Description: 함수의 기본  
*/


#include<stdio.h>

void PrintSumAndProduct(int a,int b)
{
	printf("%d + %d =%d\n",a,b,a+b);
	printf("%d * %d =%d\n",a,b,a*b);
}

int main(void)
{
	int x,y;
	
	PrintSumAndProduct(10,20);
	
	printf("정수를 입력하세요: ");
 	scanf("%d %d",&x,&y);
	 
	PrintSumAndProduct(x,y);
	 
	return 0;
}
