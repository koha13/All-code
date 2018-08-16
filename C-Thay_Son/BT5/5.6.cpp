#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char s[1000],*p;
	gets(s); strlwr(s);
	p=strtok(s," ");
	while(p!=NULL){
		p[0]-=32;
		printf("%s ",p);
		p=strtok(NULL," ");	
		
	}
}
