#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char s[1000], a[20][20]; int d=0;
	gets(s);
	char *p=strtok(s," ");
	while(p!=NULL){
		strcpy(a[d++],p);
		p=strtok(NULL," ");
	}
	for(int i=d-1;i>=0;i--) printf("%s ",a[i]);
}
