#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	printf("Cac so chan nho hon %d la:\n",n);
	for(int i=1;i<n;i++) if(i%2==0) printf("%d  ",i);
	printf("\n");
	printf("Cac so le nho hon %d la:\n",n);
	for(int i=1;i<n;i++) if(i%2!=0) printf("%d  ",i);
}
