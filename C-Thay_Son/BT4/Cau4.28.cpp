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
	for(int j=0;j<n;j++)
		for(int i=0;i<m;i++)
		b[j]+=a[i][j];
	int min=b[k];
	for(int j=0;j<n;j++)
		if(b[j]<min) min=b[j];
	for(int j=0;j<n;j++)
		if(b[j]==min){
			minat=j;
			break;
		}
	for(int i=0;i<n;i++)
		for(int j=minat;j<m;j++)
		a[i][j]=a[i][j+1];
}
void xuat(int a[20][20], int n,  int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m-1;j++)
		printf("%d",a[i][j]);
		printf("\n");}
		
}
main(){
	int a[20][20],n,m;
	nhap(a,n,m);
	xuly(a,n,m);
	xuat(a,n,m);
}
