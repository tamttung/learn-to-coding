/*
	Name: chapter4_1
	Copyright: tamttung	
	Author: tamttung
	Date: 20-10-21 12:24
	Description: 산술연산자 
*/

#include<stdio.h>

int main(void)
{
	int num1, num2, result;
	
	printf("두개의 정수를 입력하세요 :");
	scanf("%d %d", &num1,&num2);
	
	result = num1 + num2;
	printf("%d + %d = %d\n",num1,num2,result);
	
	result = num1 - num2;
	printf("%d - %d = %d\n",num1,num2,result);
	
	result = num1 * num2;
	printf("%d * %d = %d\n",num1,num2,result);
	
	result = num1 / num2;
	printf("%d / %d = %d\n",num1,num2,result);
	
	result = num1 % num2;
	printf("%d %% %d = %d\n",num1,num2,result);
	
	return 0;
}
