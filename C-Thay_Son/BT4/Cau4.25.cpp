#include<stdio.h>
main(){
	int m,n,a[20][20];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
	int min=a[0][0],max=a[0][0],minati,minatj,maxati,maxatj;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			if(a[i][j]>=max){
				max=a[i][j];
				maxati=i;
				maxatj=j;
			}
			if(a[i][j]<=min){
				min=a[i][j];
				minati=i;
				minatj=j;
			}
		}
	printf("Min = %d tai vi tri %d %d\n",min,minati,minatj);
	printf("Max = %d tai vi tri %d %d\n",max,maxati,maxatj);
}
