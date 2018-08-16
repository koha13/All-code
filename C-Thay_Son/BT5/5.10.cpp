#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char s[1000];
	int a[1000]={0};
	long long kq=0;
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='M') a[i]=1000;
		if(s[i]=='D') a[i]=500;
		if(s[i]=='C') a[i]=100;
		if(s[i]=='L') a[i]=50;
		if(s[i]=='X') a[i]=10;
		if(s[i]=='V') a[i]=5;
		if(s[i]=='I') a[i]=1;
	}
	for(int i=0;i<strlen(s);i++)
	{
		if(a[i]>=a[i+1]) kq+=a[i];
		else
		{
			kq+=a[i+1]-a[i];
			i++;
		}
	}
	printf("%d",kq);
}
