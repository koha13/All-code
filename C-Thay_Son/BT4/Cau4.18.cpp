#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		 scanf("%d",&a[i]);
}
void sx(int a[], int n){
	for(int i=0;i<n;i++){
		int tg=a[i];
		int j=i-1;
		while(tg<a[j] && j>=0){
		a[j+1]=a[j];
		j--;
	} a[j+1]=tg; printf("Buoc %d: ",i);
	for(int k=0;k<=i;k++) printf("%d ",a[k]); printf("\n");
	}
}
main(){
	int a[100], n;
	nhap(a,n);
	sx(a,n);
}
