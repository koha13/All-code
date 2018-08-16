#include<stdio.h>
void nhap(int a[20][20], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void xuly(int a[20][20], int n){
	for(int i=0;i<n;i++){
	for(int j=n-1;j>=0;j--) printf("%d ",a[j][i]);
	printf("\n");}
}
main(){
	int a[20][20], n;
	nhap(a,n);
	xuly(a,n);
}
