#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int kt(int a[],int n){
	for(int i=0;i<n;i++)
		if(a[i]!=a[n-1-i]) return 0;
	return 1;
}
main(){
	int a[20],n;
	nhap(a,n);
	if(kt(a,n)) printf("Yes\n");
	else printf("No");
}
