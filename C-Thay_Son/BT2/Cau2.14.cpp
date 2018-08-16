#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int a=n,nd=0;
	while(a>0){
		nd=nd*10+a%10;
		a/=10;
	}
	if(nd==n) printf("YES");
	else printf("NO");
}
