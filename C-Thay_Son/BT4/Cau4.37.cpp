#include<stdio.h>
void nhap(int a[20][20], int &n, int &m){
	scanf("%d",&n);
	scanf("%d",&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
}
void xuly(int a[20][20], int n, int m){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			for(int k=i;k<n;k++)
				for(int l=j;l<m;l++)
				if(a[i][j]>a[k][l]){
					int tg=a[i][j];
					a[i][j]=a[k][l];
					a[k][l]=tg;
				}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) printf("%d ",a[i][j]);
	printf("\n");}
}
main(){
	int a[20][20], n,m;
	nhap(a,n,m);
	xuly(a,n,m);
}
