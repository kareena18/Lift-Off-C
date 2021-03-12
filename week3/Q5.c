#include<stdio.h>
int palindrome(int n);

int main(){
	int n,num;
	printf("Enter the number");
	scanf("%d",&n);
	num=palindrome(n);
	if (num==n){
	   printf("%d is palindrome", n);
	}
	else{
	   printf("%d is not palindrome", n);	
	}
	return 0;
}

int palindrome(int n){
	static int rev=0,rem=0;
	if (n!=0){
		rem=n%10;
		rev=rev*10+rem;
		palindrome(n/10);
	}
	return rev;	
}
