#include<stdio.h>
int factorial(int n);
int main(){
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Factorial of %d is %d", n, factorial(n));
	return 0;
}

int factorial(int n){
	int fac=1;
	while(n>1){
		fac*=n;
		n=n-1;
	}
	return fac;
}
