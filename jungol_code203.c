//jungol_code203

#include<stdio.h>
#define SIZE 10

int main()
{
	int arr[SIZE];
	int *p=arr;
	int count_odd=0,count_even=0,i;
	
	for(i=0;i<SIZE;i++){
		scanf("%d",&arr[i]);}
		
	for(i=0;i<SIZE;i++){
		if(arr[i]%2==0){
			count_even++;
		}
		else{
			count_odd++;
		}
	}
	printf("odd : %d\n",count_odd);
	printf("even : %d\n",count_even);
	
	return 0;
}
	
	
	
	
