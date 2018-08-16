#include<stdio.h>
main(){
	int a[20][20],n,b=0,d=1;
	int i,j;
	scanf("%d",&n);
	while(b<=n/2){
		for(i=b;i<n-b;i++) a[b][i]=d++;
		for(i=b+1;i<n-b;i++) a[i][n-b-1]=d++;
		for(i=n-b-2;i>=b;i--) a[n-b-1][i]=d++;
		for(i=n-b-2;i>b;i--) a[i][b]=d++;
		b++;
	}
	for(i=0;i<n;i++){
	for(int j=0;j<n;j++) printf("%d ",a[i][j]);
	printf("\n");}
}
