//jungol_code204

#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	
	int arr[a];
	int i,j,index,tmp;
	
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<a;i++){
		index=i;
		for(j=i+1;j<a;j++){
			if(arr[i]<arr[j]){
				tmp=arr[index];
				arr[index]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	
	printf("max : %d\n",arr[0]);
	printf("min : %d\n",arr[a-1]);
	
	return 0;
}

