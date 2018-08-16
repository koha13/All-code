#include<stdio.h>
void nhap(int a[20][20], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void xuly(int a[20][20], int n){
	int tongc=0, tongp=0;
	for(int i=0;i<n;i++) tongc+=a[i][i];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		if(i+j==n-1) tongp+=a[i][j];
	printf("%d\n",tongc);
	printf("%d\n",tongp);
}
main(){
	int a[20][20],n;
	nhap(a,n);
	xuly(a,n);
}
