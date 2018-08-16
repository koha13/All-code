#include<stdio.h>
#include<math.h>
main(){
	int n,kt=1;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) kt=0;
	if(kt==1) printf("YES");
	else printf("NO");
}
