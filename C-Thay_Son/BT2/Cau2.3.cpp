#include<stdio.h>
main(){
	int n;
	double s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		s+=double(1)/i;
	printf("%.10llf",s);
}
