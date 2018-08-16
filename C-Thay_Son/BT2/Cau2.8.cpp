#include<stdio.h>
main(){
	int a,b;
	long long s;
	scanf("%d%d",&a,&b);
	s=a*b;
	while(b!=0){
		a=a%b;
		int tg=a;
		a=b;
		b=tg;
	}
	printf("UCLN la: %d\n",a);
	printf("BCNN la: %lld",s/a);
}
