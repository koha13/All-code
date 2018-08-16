#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		 scanf("%d",&a[i]);
}
void sx(int a[], int n, int &x){
	int c[101], y=0;
	scanf("%d",&x);
	for(int i=0;i<n;i++)
		if(a[i]<=x && a[i+1]>=x) {
			c[y++]=a[i];
			c[y++]=x;
		}
		else c[y++]=a[i];
	for(int i=0;i<n+1;i++) printf("%d ",c[i]);
}
main(){
	int a[100],n,x;
	nhap(a,n);
	sx(a,n,x);
}
