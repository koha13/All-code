#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char s[1000],a[30][11],t[30]; int d=0;
	gets(s);
	char *p=strtok(s," ");
	while(p!=NULL){
		strcpy(a[d++],p);
		p=strtok(NULL," ");
	}
	for(int i=0;i<d;i++)
		for(int j=i+1;j<d;j++)
			if(strcmp(a[i],a[j])>=1){
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
	for(int i=0;i<d;i++) printf("%s\n",a[i]);
}
