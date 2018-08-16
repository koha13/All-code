#include<stdio.h>
main(){
	int n,t=0;
	scanf("%d",&n);
	while(n>0){
		t+=n%10;
		n/=10;
	}
	printf("%d",t);
}
