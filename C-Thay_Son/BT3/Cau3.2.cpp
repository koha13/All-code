/*Chuong trinh liet ke cac so nguyen to co 6 chu so toan la chu so le*/
#include<stdio.h>
#include<math.h>
void lk(int a){
	int i,dem=0,x,y,kt=0;
	for(i=2;i<=sqrt(a);i++)
	if(a%i==0) dem=1;
	if(dem==0){
	y=a;
	while(y>0){
		x=y%10;
		y=y/10;
		if(x%2==0) kt=1;
	}
	if(kt==0) printf("%d\n",a);
}
}
main(){
	int i;
	for(i=100000;i<=999999;i++)
	lk(i);
}
