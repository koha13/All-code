#include<stdio.h>
#include<math.h>
void ngto(long long a){
	long long i,kt=0;
	for(i=2;i<=sqrt(a);i++)
	if(a%i==0) kt=1;
	if(kt==0) printf("%lld\n",a);
}

main(){
	long long i;
	for(i=10000;i<=9999999;i++)
	ngto(i);
}
