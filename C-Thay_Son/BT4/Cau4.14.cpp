#include<stdio.h>
void nhap(int a[], int &n){
	int b;
	scanf("%d",&n); int i=1;
	scanf("%d",&a[0]);
	b=n;
	while(i<b){
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++)
			if(a[i]==a[j]){
				printf("Nhap lai so vua roi\n");
				i--;
			}
		i++;
	}
}
void in(int a[], int n){
	for(int i=0;i<n;i++)
		printf("%d  ",a[i]);
}
main(){
	int a[20], n;
	nhap(a,n);
	in(a,n);
}
