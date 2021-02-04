#include<stdio.h>
int main()
{
	float a;
	printf("Enter temperature in celsius: \n");
	scanf("%f",&a);
	float b=(9*a/5)+32;
	printf("That is equal to %f fahrenheit.\n",b);
	return 0;
}
