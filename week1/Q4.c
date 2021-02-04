#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	printf("Marks in physics: ");
	scanf("%f",&a);
	printf("Marks in chemistry: ");
	scanf("%f",&b);
	printf("Marks in biology: ");
	scanf("%f",&c);
	printf("Marks in mathematics: ");
	scanf("%f",&d);
	printf("Marks in computer: ");
	scanf("%f",&e);
	printf("total marks: ");
	scanf("%f",&f);
	float percentage=((a+b+c+d+e)*100)/f;
	printf("your percentage is %f \n",percentage);
	
	if(percentage>=90){
		printf("Your grade:A\n");
	}
	else if(percentage>=80){
		printf("Your grade:B\n");
	}
	else if(percentage>=70){
		printf("Your grade:C\n");
	}
	else if(percentage>=60){
		printf("Your grade:D\n");
	}
	else if(percentage>=40){
		printf("Your grade:E\n");
	}
	else{
		printf("Yourgrade:F\n");
	}
	return 0;
}
