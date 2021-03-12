#include<stdio.h>
float square(float n);

int main(){
	float n;
	printf("Enter the number whose square you want to find out:");
	scanf("%f", &n);
	printf("Square of %.2f is %.2f", n, square(n));
}

float square(float n){
	return n*n;
}
