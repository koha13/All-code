#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main(){
	char s[1000],s1[1000],s2[1000],s3[1000];
	int l,l1,l2,i,k,j=0,d=0;
	gets(s);
	gets(s1);
	l1=strlen(s1);
	while(s[i]){
		k=i;j=0;
		while(s[k]==s1[j]) {
			k++;j++;}
		if(j==l1){
			i+=l1;
		} else s3[d++]=s[i++];
	} 
	for(int i=0;i<d;i++) printf("%c",s3[i]);
}
