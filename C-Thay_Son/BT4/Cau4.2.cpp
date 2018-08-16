#include<stdio.h>
nhap(int *a, int n){
	for( int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
main(){
	int a[100],n,tg,i,j;
	scanf("%d",&n);
	nhap(a,n);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j]){
				tg=a[j];
				a[j]=a[i];
				a[i]=tg;
		}
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
}
