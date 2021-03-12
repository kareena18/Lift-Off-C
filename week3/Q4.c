#include<stdio.h>
int factorial(int n);
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if (n<1){
		printf("It has no factorial");
	}
	else{
		printf("Factorial of %d is %d",n,fac(n));
	}
	return 0;
}

int fac(int n){	
    if (n<=1){
	    return 1;
	}	
    return n*fac(n-1);
}
