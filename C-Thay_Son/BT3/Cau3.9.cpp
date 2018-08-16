#include<stdio.h>
#include<math.h>
int ngto(int a){
	if(a<2) return 0;
	for(int i=2;i<=sqrt(a);i++)
	if(a%i==0) return 0;
	return 1;
}
int tong(int a){
	int t=0;
	while(a>0){
		t+=a%10;
		a/=10;
	}
	if(ngto(t)) return 1;
	return 0;
}
int kogiam(int a){
	int x,y,kt=1;
	while(a>10){
		x=a%10;
		y=(a/10)%10;
		a/=10;
		if(y<x) kt=0;
	}
	if(kt==1) return 1;
	return 0;
}
main(){
	for(int i=1000000;i<=9999999;i++)
		if(kogiam(i) && tong(i) && ngto(i)) printf("%d\n",i);
}
