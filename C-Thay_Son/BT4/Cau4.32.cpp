#include<stdio.h>
void nhap(int a[20][20], int &n, int &m){
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
void xuly(int a[20][20],int b[20][20], int n, int m,int p){
	int k, c[20][20]={0};
	for(int i=0;i<n;i++)
		for(int j=0;j<p;j++)
			for(k=0;k<m;k++)
			c[i][j]+=a[i][k]*b[k][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++)
		printf("%d ",c[i][j]);	
		printf("\n");}
}
main(){
	int a[20][20],b[20][20], n,m,p;
	nhap(a,n,m);
	nhap(b,m,p);
	xuly(a,b,n,m,p);
}
