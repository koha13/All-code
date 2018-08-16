#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		 scanf("%d",&a[i]);
}
void kt(int a[], int n){
	int kt=1,i;
	for(i=0;i<n-1;i++)
	if(a[i]>a[i+1]) {
		kt=0;
		break;
	}
	if(kt==1) printf("YES");
	else printf("%d\n",i);
		
}
main(){
	int a[100], n;
	nhap(a,n);
	kt(a,n);
}
