#include<stdio.h>

main(){
	double a=1,c;
	int i=1;
	scanf("%llf",&c);
	while((2*i+1)*c<=1){
		if(i%2==0)
		a=a+double(1)/(double(2)*i+1);
		else
		a=a-double(1)/(double(2)*i+1);
		i++;
	}
	
	printf("%.7llf",a*4);
}
		
