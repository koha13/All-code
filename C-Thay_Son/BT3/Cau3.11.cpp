#include<stdio.h>
#include<math.h>
int ngto(int a){
	if(a<2) return 0;
	for(int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return 1;
}
int ngtond(int a){
	int nd=0,b=a;
	while(a>0){
		nd=nd*10+a%10;
		a/=10;
	}
	if(ngto(nd)) return 1;
	return 0;
}
int csngto(int a){
	int kt=1,t;
	while(a>0){
		t=a%10;
		a/=10;
		if(ngto(t)==0) return 0;
	}
	return 1;
}
main(){
	for(int i=1000000;i<=9999999;i++)
	if(csngto(i) && ngto(i) && ngtond(i)) printf("%d\n",i);
}
