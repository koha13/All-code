#include<stdio.h>
#include<math.h>
int dxc(int a[20][20] , int n){
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++) if(a[i][j]!=a[j][i]) return 0;
	return 1;
}
int dxp(int a[20][20], int n){
	int b[20][20];
	for(int i=n-1;i>=0;i--)
	for(int j=0;j<n;j++) b[abs(i-n+1)][j]=a[j][i];
	if(dxc(b,n)) return 1;
	return 0;
}
int pc(int a[20][20], int n){
	for(int i=0;i<n;i++) if(a[i][i]!=1) return 0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i!=j && a[i][j]!=0) return 0;
	return 1;
}
int pd(int a[20][20], int n){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i+j==n-1 && a[i][j]!=0) return 0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(i+j!=n-1 && a[i][j]!=1) return 0;
	return 1;
}
main(){
	int n,a[20][20];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
	if(dxc(a,n)) printf("Ma tran doi xung qua duong cheo chinh\n");
	if(dxp(a,n)) printf("Ma tran doi xung qua duong cheo phu\n");
	if(pc(a,n)) printf("Ma tran chi co duong cheo chinh = 1 con lai = 0\n");
	if(pd(a,n)) printf("Ma tran chi co duong cheo phu = 0 con lai = 1\n");
}
