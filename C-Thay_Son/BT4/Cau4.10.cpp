#include<stdio.h>
void nhap(int a[], int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void xh(int a[], int n){
	int b[20]={0},max;
	for(int i=0;i<n;i++){
		if(b[i]==0) {
			b[i]++;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					b[i]++;
					b[j]=-1;
				}
			}
		}
	}
	max=b[0];
	for(int i=0;i<n;i++)
		if(b[i]>max) max=b[i];
	for(int i=0;i<n;i++)
		if(b[i]==max)
			printf("%d",a[i]);
}
main(){
	int a[20],n;
	nhap(a,n);
	xh(a,n);
}
