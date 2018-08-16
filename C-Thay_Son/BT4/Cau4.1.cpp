#include<stdio.h>
void nhap(int *a, int n){
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
main(){
	int a[100],n,max=0;
	scanf("%d",&n);
	nhap(a,n);
	for(int i=0;i<n;i++)
		if(a[i]>max) max=a[i];
	printf("%d",max);
}
