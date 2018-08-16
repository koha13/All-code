#include<stdio.h>
void nhap(int a[20][20], int &n, int &m){
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
void xuly(int a[20][20], int n,int m){
	int minat;
	int b[20]={0},k=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		b[i]+=a[i][j];
	int min=b[0];
	for(int i=0;i<n;i++)
		if(b[i]<min) min=b[i];
	for(int i=0;i<n;i++)
		if(b[i]==min){
			minat=i;
			break;
		}
	for(int i=minat;i<n;i++)
		for(int j=0;j<m;j++)
		a[i][j]=a[i+1][j];
}
void xuat(int a[20][20], int n,  int m){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m;j++)
		printf("%d",a[i][j]);
		printf("\n");}
		
}
main(){
	int a[20][20],n,m;
	nhap(a,n,m);
	xuly(a,n,m);
	xuat(a,n,m);
}
