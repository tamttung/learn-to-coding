//jungol_code625

#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	
	int arr[a];
	int i,tmp,index,j;
	
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<a;i++){
		index=i;
		for(j=i+1;j<a;j++){
			if(arr[index]<arr[j]){
				tmp=arr[j];
				arr[j]=arr[index];
				arr[index]=tmp;	
			}
		}
	}
	
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
	
	
