#include<stdio.h>
main(){
	float a[20][20],tiso;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<=n;j++) scanf("%f",&a[i][j]);
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++)
			if(j!=i){
				tiso=a[i][j]/a[j][j];
				for(int k=0;k<=n;k++)	a[i][k]=a[i][k]-tiso*a[j][k];
			}
	}
	for(int i=0;i<n;i++) 
		if(a[i][i]==0 && a[i][n]!=0) {
			printf("Phuong trinh vo ngiem");
			break;
		}
	for(int i=0;i<n;i++){
		if(a[i][i]==0 && a[i][n]==0) printf("x%d tuy y\n",i);
		else printf("x%d = %f\n",i,a[i][n]/a[i][i]);
	}
}
