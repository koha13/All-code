#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char s[1000];
	int dem=0;
	gets(s);
	char *p=strtok(s," ");
	while(p!=NULL){
		dem++;
		p=strtok(NULL," ");
		
	}
	printf("%d\n",dem);
}
