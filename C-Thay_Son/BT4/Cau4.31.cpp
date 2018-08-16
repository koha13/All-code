#include<stdio.h>
main(){
	int m,n,a[20][20],b[20][20];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++){
		scanf("%d",&a[i][j]);
		b[j][i]=a[i][j];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) printf("%d ",b[i][j]);
		printf("\n");
	}
}
