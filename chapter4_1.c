/*
	Name: chapter4_1
	Copyright: tamttung	
	Author: tamttung
	Date: 20-10-21 12:24
	Description: ��������� 
*/

#include<stdio.h>

int main(void)
{
	int num1, num2, result;
	
	printf("�ΰ��� ������ �Է��ϼ��� :");
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
