#include<stdio.h>
int calc(int x, int y);
int main(){
	int x,y,hcf,lcm;
	printf("Enter two numbers:");
	scanf("%d%d", &x,&y);
	hcf=calc(x,y);
	lcm=(x*y)/hcf;
	printf("Gcd: %d",hcf);
	printf("\nLcm: %d",lcm);
	return 0;
}

int calc(int x, int y){
	if (y!=0){
	    return calc(y,x%y);
	}
	else{
		return x;
	}
}

