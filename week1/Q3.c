#include<stdio.h>
int main()
{
	float a,b,c,d;
	float pi=3.14;
	printf("Radius of the circle: \n");
	scanf("%f",&a);
	b=2*a;
	printf("diameter of the circle is %f \n",b);
	c=2*pi*a;
	printf("circumference of the circle is %f \n",c);
	d=pi*a*a;
	printf("Area of the circle is %f \n",d);
	return 0;
}
