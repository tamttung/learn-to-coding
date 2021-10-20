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
	
	printf("ch 의 바이트크기:%d\n",sizeof ch); 
	printf("num의 바이트크기:%d\n",sizeof num);
	printf("fnum의 바이트크기:%d\n",sizeof fnum);
	printf("3.14의 바이트크기:%d\n",sizeof 3.14f);
	printf("char 형의 바이트크기:%d\n",sizeof(char));
	printf("short 형의 바이트크기:%d\n",sizeof(short));
	printf("int 형의 바이트크기:%d\n",sizeof(int));
	printf("long 형의 바이트크기:%d\n",sizeof(long));
	printf("float 형의 바이트크기:%d\n",sizeof(float));
	printf("double 형의 바이트크기:%d\n",sizeof(double));
	
	return 0;
}

