#include<stdio.h>
#include<math.h>
int ngto(int a){
	if(a<2) return 0;
	for(int i=2;i<=sqrt(a);i++)
	 if(a%i==0) return 0;
	 return 1;
}
main(){
	int m,n,a[20][20];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			if(ngto(a[i][j])) printf("%d ",a[i][j]);
		printf("\n");
	}
}
