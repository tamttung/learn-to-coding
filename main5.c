#include <stdio.h>

int main(void)
{
	double yard, inch;
	double result_yard, result_inch;
	double cm_per_yard, cm_per_inch;
	
	yard = 2.1;
	inch = 10.5;
	cm_per_yard = 91.44;
	cm_per_inch = 2.54;
	result_yard = yard*cm_per_yard;
	result_inch = inch*cm_per_inch;
	
	
	printf("%4.1lfyd = %4.1lfcm\n", yard, result_yard);	
	printf("%4.1fin = %5.1fcm\n", inch, result_inch);

	return 0;
}



	
