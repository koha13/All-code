#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		 scanf("%d",&a[i]);
}
void kt(int a[], int n){
	int b[100]={0},maxat;
	for(int i=0;i<n;i++)
	if(b[i]==0){
		b[i]++;
		int j=i;
		while(a[j]<=a[j+1] && j<n-1){
			b[i]++;
			b[j+1]=-1;
			j++;
		}}
	int max=b[0];
	for(int i=0;i<n;i++) if(b[i]>max){
		 max=b[i];
		 maxat=i;
	}
	int c=maxat+1;
	printf("%d ",a[maxat]);
	while(1){
		if(b[c]<0){
			printf("%d ",a[c]);
			c++;
		}
		else break;
	}
	}
main(){
	int a[100], n;
	nhap(a,n);
	kt(a,n);
}
