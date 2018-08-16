#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char s[1000]; int d1,d2,d3; d1=d2=d3=0;
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='A') d1++;
		if(s[i]=='B') d2++;
		if(s[i]=='C') d3++;
	}
	printf("%d %d %d\n",d1,d2,d3);
	strupr(s); d1=d2=d3=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='A') d1++;
		if(s[i]=='B') d2++;
		if(s[i]=='C') d3++;
	}
	printf("%d %d %d",d1,d2,d3);
}
