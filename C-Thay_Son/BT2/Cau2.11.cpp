#include<stdio.h>
#include<math.h>
int ngto(int a){
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0) return 0;
	return 1;
}
main(){
	int n,i=2;
	scanf("%d",&n);
	while(n>0){
		if(ngto(i)) {
			printf("%d\n",i);
			n--;
		}
		i++;
	}
}
