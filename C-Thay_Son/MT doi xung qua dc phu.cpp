#include<stdio.h>
void nhap(int a[20][20], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void xuly(int a[20][20], int n){
	int b[20][20],kt=1;
	for(int i=0;i<n;i++){
		int j=0;
		while(j<n){
			b[i][n-1-j]=a[i][j];
			j++;
		}
	}
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++) 
	if(b[i][j]!=b[j][i]) kt=0;
	if(kt==0) printf("NO");
	else printf("YES");
}
main(){
	int a[20][20], n;
	nhap(a,n);
	xuly(a,n);
}
