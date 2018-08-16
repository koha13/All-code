#include<stdio.h>
void nhap(int *a, int n){
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
main(){
	int a[100],n,b,c,dem=0,i;
	float tb=0;
	scanf("%d",&n);
	nhap(a,n);
	scanf("%d%d",&b,&c);
	for(i=0;i<n;i++)
		if(a[i]>=b && a[i]<=c){
			tb+=a[i];
			dem++;
		}
	tb=tb/dem;
	printf("%.2f\n",tb);
}
