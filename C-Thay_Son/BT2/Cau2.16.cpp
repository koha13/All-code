#include<stdio.h>
main(){
	int a,b;
	scanf("%d%d",&a,&b);
	while(b!=0){
		a=a%b;
		int tg=a;
		a=b;
		b=tg;
	}
	if(a==1) printf("YES");
	else printf("NO");
}
