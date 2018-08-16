#include<stdio.h>
#include<math.h>
main(){
	double x,c,kq=1,gt=1,y;
	int n=1;
	scanf("%lf%lf",&c,&x);
	y=x;
	while(fabs(y/gt)>c){
		kq+=(double)y/gt;
		y*=x;
		n++;
		gt+=gt*n;
	}
	printf("%lf",kq);
}
	
