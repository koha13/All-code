#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main(){
	char s[1000],s1[1000],s2[1000],s3[1000];
	int l,l1,l2,i=0,k,j=0,d=0;
	gets(s);
	gets(s1);
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	while(s[i]){
		k=i;j=0;
		while(s[k]==s1[j] && s[k]!=NULL){
			k++;j++;}
		if(j==l1){
			for(int m=0;m<l2;m++)
			s3[d++]=s2[m];
			i+=l1;
		} else s3[d++]=s[i++];
	} 
	for(int i=0;i<d;i++) printf("%c",s3[i]);
}
