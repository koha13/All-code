#include<stdio.h>
void nhap(int *a, int n){
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
main(){
	int a[100],n,dem=0,i;
	scanf("%d",&n);
	nhap(a,n);
	for(i=0;i<(n-1);i++)
	if(a[i]==a[i+1]) dem++;
	printf("%d",dem);
}
