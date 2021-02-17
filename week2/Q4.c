#include<stdio.h>
int main()
{
	int n,i,arr[i];
	printf("size: ");
	scanf("%d",&n);
	printf("elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max,min;
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("max value:%d\n",max);
	printf("min value:%d\n",min);
	return 0;
}
