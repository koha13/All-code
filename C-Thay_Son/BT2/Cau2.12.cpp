#include<stdio.h>
main(){
	int n;
	long long a=0,b=1,s;
	scanf("%d",&n);
	printf("1\n");
	for(int i=2;i<=n;i++){
		s=a+b;
		printf("%lld\n",s);
		a=b;
		b=s;
	}
	
}
