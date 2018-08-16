#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char s[1000];
	int na,pa,so;
	na=pa=so=0;
	gets(s);strupr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]<='9'&&s[i]>='0') so++;
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') na++;
		 else if(s[i]<='Z'&&s[i]>='A') pa++;
	}
	printf("So nguyen am %d\n",na);
	printf("So phu am %d\n",pa);
	printf("So chu so %d\n",so);
	printf("So ki tu khac %d\n",strlen(s)-so-na-pa);
}
