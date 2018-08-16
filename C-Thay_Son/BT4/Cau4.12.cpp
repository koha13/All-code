#include<stdio.h>
#include<math.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void kt(int a[], int n, int &x){
	int min,d;
	scanf("%d",&x);
	min=abs(x-a[0]);
	for(int i=0;i<n;i++){
		d=abs(x-a[i]);
		if(d<min) min=d;
	}
	for(int i=0;i<n;i++)
		if(abs(x-a[i])==min) printf("%d\n",i);
}
main(){
	int a[20],n,x;
	nhap(a,n);
	kt(a,n,x);
}
