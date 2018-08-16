#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	char s[1000];
	char a[20][100];int i=0,d=0;
	gets(s);
	char *p=strtok(s," ");
	while(p!=NULL){
		strcpy(a[d],p);
		p=strtok(NULL," ");
		d++;
	}
	int max=strlen(a[0]);
	for(int i=0;i<d;i++)
		if(strlen(a[i])>max) max=strlen(a[i]);
	for(int i=0;i<d;i++)
		if(strlen(a[i])==max) {printf("%d",i+1); break;}
}
