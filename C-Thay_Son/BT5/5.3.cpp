#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ktra(int i){
	char s[1000], s1[1000];
	itoa(i,s,10);
	strcpy(s1,s);
	strrev(s1);
	if(strcmp(s,s1)==0) return 1;
	return 0;
}
main(){
	for(int i=100000;i<=999999;i++)
		if(ktra(i)) printf("%d\n",i);
}
