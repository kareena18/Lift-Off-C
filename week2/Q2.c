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
	int sum=0;
	for(i=0;i<n;i++){
		if(i%2==0||arr[i]%2==0){
			sum+=arr[i];
		}
	}
	printf("sum of even number and even position elements is %d",sum);
	return 0;
}
