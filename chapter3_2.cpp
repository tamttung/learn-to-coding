/*
	Name: chapter3_2
	Copyright: tamttung	
	Author: tamttung
	Date: 20-10-21 11:13
	Description: chapter 3_2( sizeof )
*/

 #include <stdio.h>
 
 int main(void)
{
 	char ch;
	int num;
	double fnum;
	
	printf("ch �� ����Ʈũ��:%d\n",sizeof ch); 
	printf("num�� ����Ʈũ��:%d\n",sizeof num);
	printf("fnum�� ����Ʈũ��:%d\n",sizeof fnum);
	printf("3.14�� ����Ʈũ��:%d\n",sizeof 3.14f);
	printf("char ���� ����Ʈũ��:%d\n",sizeof(char));
	printf("short ���� ����Ʈũ��:%d\n",sizeof(short));
	printf("int ���� ����Ʈũ��:%d\n",sizeof(int));
	printf("long ���� ����Ʈũ��:%d\n",sizeof(long));
	printf("float ���� ����Ʈũ��:%d\n",sizeof(float));
	printf("double ���� ����Ʈũ��:%d\n",sizeof(double));
	
	return 0;
}

