#include<stdio.h>
void nhap(int *a,int n){
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int kt(int a[], int n){
	int kt=0,i;
	for(i=0;i<n;i++) if(a[0]!=a[i]) kt=1;
	if(kt==1) return 0;
	return 1;
}
int max1(int a[],int n){
	int i,max=a[0];
	for(i=0;i<n;i++) if(a[i]>max) max=a[i];
	return max;
}
int semimax(int a[],int n,int max){
	int max2=a[0],i;
	for(i=0;i<n;i++) if(a[i]>max2 && a[i]<max) max2=a[i];
	return max2;
}
void xuat(int a[],int n){
	int i;
	for(i=0;i<n;i++) if(a[i]==n) printf("%d  ",i+1);
}
main(){
	int a[100],n,max2,max;
	scanf("%d",&n);
	nhap(a,n);
	if(kt(a,n)) printf("NO");
	else{
		max=max1(a,n);
		max2=semimax(a,n,max);
		printf("%d\n",max2);
		xuat(a,max2);
	}
}
