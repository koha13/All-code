#include<stdio.h>
main(){
	int n,a[100],b[100]={0},min,minat;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		for(int i=0;i<n;i++)
			if (b[i]==0){
				min=a[i];
				minat=i;
				break; 
			}
		for(int i=0;i<n;i++)
			if(a[i]<min && b[i]==0){
	        min=a[i]; minat=i;
	   }
       b[minat]=-1;
       printf("%d ",min);
	}
}
