#include<stdio.h>
void lk(int a){
		int dao=0,tong=0,x;
		x=a;
		while(x>0){
			dao=dao*10+x%10;
			tong=tong+x%10;
			x=x/10;
		}
		if(dao==a && tong%10==0)
		printf("%d\n",a);	
}
main(){
	int i;
	for(i=100000;i<=999999;i++)
	lk(i);
}
