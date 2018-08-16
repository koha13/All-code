#include<stdio.h>
#include<math.h>
main(){
	int m,n,dem=0,a,b;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){
		a=sqrt(i); b=a*a;
		if(b==i) {
			dem++;
			printf("%d\n",i);
		}
	}
	printf("%d",dem);
}
