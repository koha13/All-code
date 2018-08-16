#include<stdio.h>
main(){
	int m,n,a[20][20],kttren=1,ktduoi=1;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++){
		if(i<j && a[i][j]!=0) kttren=0;
		if(i>j && a[i][j]!=0) ktduoi=0;
	}
	if(kttren==1) printf("Ma tran tam giac tren");
	if(ktduoi==1) printf("Ma tran tam giac duoi");
}
