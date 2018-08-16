#include<stdio.h>
void dem(int a){
	int deml=0, demc=0,x,b;
	x=a;
	while(x>0){
		b=x%10;
		if(b%2==0) demc+=1;
		else deml+=1;
		x=x/10;}
		printf("So chu so le: %d\n",deml);
		printf("So chu so chan: %d\n",demc);
	}
void kt(int a){
	int x,y,b,c,d=0,kt1=0,kt2=0;
	x=a; y=a;
	while(x>10){
		b=x%10;
		c=(x/10)%10;
		x=x/10;
		if(b>c) kt1=1;
		if(b<c) kt2=1;
		b=c;
	}
	if(kt1==0) printf("Day giam dan");
	if(kt2==0) printf("Day tang dan");
}
main(){
	int a;
	scanf("%d",&a);
	dem(a);
	kt(a);
}
