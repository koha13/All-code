#include<stdio.h>
main(){
	int n;
	long long s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) s+=i;
	printf("S = %lld",s);
}
