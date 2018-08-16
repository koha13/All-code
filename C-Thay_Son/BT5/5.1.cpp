#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	int n,a,t; char s[1000];
	scanf("%d",&n);
	scanf("%d",&a);
	int i=0;
	while(n>=1){
		t=n%a;
		n=n/a;
		if(t<10) s[i]=t+'0';
		else s[i]=t-10+'A';
		i++;
		
	}
	s[i]='\0';
	strrev(s); printf("%s",s);
}
