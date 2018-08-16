#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char s[1000],a[10][20];
	int d=0;
	gets(s);
	char *p=strtok(s," ");
	while(p!=NULL){
		strcpy(a[d],p);
		d++;
		p=strtok(NULL," ");
	}
	printf("%s %s ",a[d-1],a[0]);
	for(int i=1;i<d-1;i++)
		printf("%s ",a[i]);
}
