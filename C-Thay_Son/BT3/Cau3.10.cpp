#include<stdio.h>
int chuso(int a){
	int b,kt=1;
	while(a>0){
		b=a%10;
		a/=10;
		if(b!=0 && b!=6 && b!=8) kt=0;
	}
	if(kt==1) return 1;
	return 0;
}
int tong(int a){
	int t=0;
	while(a>0){
		t=t+a%10;
		a/=10;
	}
	if(t%10==0) return 1;
	return 0;
}
int thuannghich(int a){
	int nd=0,b=a;
	while(a>0){
		nd=nd*10+a%10;
		a/=10;
	}
	if(nd==b) return 1;
	return 0;
}
main(){
	for(int i=1000000;i<999999999;i++)
		if(chuso(i) && tong(i) && thuannghich(i)) printf("%d\n",i);
}
