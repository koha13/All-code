#include<stdio.h>
main(){
	int n,a[100];
	float x;
	scanf("%d",&n);
	for(int i=n;i>=0;i--) scanf("%d",&a[i]);
	scanf("%llf",&x);
	double s=0;
	s=(double)a[n]*(double)x + (double)a[n-1];
	for(int i=n-2;i>=0;i--) s=s*(double)x+(double)a[i];
	printf("%llf",s);
}
