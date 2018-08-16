#include<stdio.h>
main(){
	float a[20][20],tiso; double det=1;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++) scanf("%f",&a[i][j]);
	for(int j=0;j<n;j++){
		for(int i=j+1;i<n;i++){
				tiso=a[i][j]/a[j][j];
				for(int k=0;k<n;k++)	a[i][k]=a[i][k]-tiso*a[j][k];
			}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%.2f ",a[i][j]);
		printf("\n");
	}
	for(int i=0;i<n;i++) det*=a[i][i];
	printf("%llf",det);
}
