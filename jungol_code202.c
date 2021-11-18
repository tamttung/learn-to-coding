//jungol_code202

#include<stdio.h>

int main()
{
	int a,b,c;
	int *pa=&a,*pb=&b,*pc=&c;
	
	scanf("%d",pa);
	scanf("%d",pb);

	*pc=*pa-*pb;
	
	if(*pc<0){
		*pc*=-1; 
	}
	
	printf("%d",*pc);
	
	return 0;
}

