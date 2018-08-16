#include<stdio.h>
main(){
	int n,souoc=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		if(n%i==0){
			printf("%d\n",i);
			souoc++;
		}
	printf("%d co %d uoc so.",n,souoc);
}
