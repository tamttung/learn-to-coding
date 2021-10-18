#include <stdio.h>

int main(void) 
{
	double n1,n2;
	char a;
	
	scanf("%lf %lf %c", &n1, &n2, &a);

	
	printf("%.2lf\n%.2lf\n%c\n", n1,n2,a);
	return 0;
}

