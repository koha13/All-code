#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void in(int a[], int b[], int n, int m, int &p){
	int c[40], x=0,y=0;
	scanf("%d",&p);
	for(int i=0;i<p;i++)
		c[i]=a[x++];
	for(int i=p;i<=p+m-1;i++)
		c[i]=b[y++];
	for(int i=p+m;i<n+m;i++)
		c[i]=a[x++];
	for(int i=0;i<m+n;i++)
		printf("%d  ",c[i]);
}
main(){
	int a[20], b[20], m,n,p;
	nhap(a,n);
	nhap(b,m);
	in(a,b,n,m,p);
}
