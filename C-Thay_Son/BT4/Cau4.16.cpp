#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void swap(int a,int b,int &kt){
	int tg;
	tg=a;
	a=b;b=tg;
	kt=1;
	
}
void bb(int a[],int n){
	for(int i=0;i<n;i++){
		int kt=0;
		for(int j=0;j<n-1;j++)
		if(a[j]>a[j+1]) {
			int tg=a[j];
			a[j]=a[j+1];
			a[j+1]=tg;
			kt=1;
		}
		if(kt==0) break;
		for(int k=0;k<n;k++) {
			printf("%d ",a[k]);
		}
		printf("\n");
		
	}
		
}
void xuat(int a[], int n){
	for(int i=0;i<n;i++) printf("%d ",a[i]);
}
main(){
	int a[100], n;
	nhap(a,n);
	bb(a,n);
}
