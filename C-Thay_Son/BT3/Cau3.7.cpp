#include<stdio.h>
#include<math.h>
int ngto(int a){
	int i,kt=0;
	for(i=2;i<=sqrt(a);i++)
	if(a%i==0) kt=1;
	if(kt==0) return(1);
	else return(0);
}
void lk(int a){
	int dem=0,i=2;
	while(dem<a){
		if(ngto(i)==1){
			printf("%d ",i);
			dem++;
		}
		i++;
	}
}
void fibo(int n){
	long long a=0,b=1,i,c;
	printf("%d ",1);
	for(i=2;i<=n;i++){
		c=a+b;
		printf("%lld ",c);
		a=b;
		b=c;
	}
}
main(){
	int a;
	scanf("%d",&a);
	lk(a);
	printf("\n");
	fibo(a);
}
