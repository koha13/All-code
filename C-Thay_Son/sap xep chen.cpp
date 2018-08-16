#include<stdio.h>
main(){
	int a[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<n;i++)
	{
		int tg=a[i];
		int j=i-1;
		while(tg<a[j]&&j>=0){
			a[j+1]=a[j]; j--;
		} a[j+1]=tg;
	}
for(int i=0;i<n;i++) printf("%d ",a[i]);}
