#include<stdio.h>
main(){
	int n;
	long long s=0,gt=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		gt*=i;
		s+=gt;
	}
	printf("%lld",s);
}
