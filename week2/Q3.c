#include<stdio.h>
int main()
{
	int i,word=1;
	char s[100];
	printf("enter any string: ");
	gets(s);
	for(i=0;s[i]!=0;i++){
		if(s[i]==' '||s[i]=='\n'||s[i]=='\t'){
			word++;
		}
	}
	printf(" total no. of words=%d",word);
	return 0;
}
