#include<stdio.h>
void nhap(int *a, int n){
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
main(){
	int a[100],n,x,i,dem=0;
	scanf("%d",&n);
	nhap(a,n);
	scanf("%d",&x);
	for(i=0;i<n;i++)
	if(a[i]==x) dem++;
	printf("%d",dem);
	
}
