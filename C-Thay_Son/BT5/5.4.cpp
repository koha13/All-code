#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char s[1000];
	gets(s);
	int l=strlen(s);
	strlwr(s);
	for(int i=0;i<l;i=i+2)
		s[i]=s[i] - 32;
	printf("%s",s);
}
