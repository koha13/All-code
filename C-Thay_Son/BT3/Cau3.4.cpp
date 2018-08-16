#include<stdio.h>
main(){
	int a,tong=0,i,x;
	scanf("%d",&a);
	x=a;
	while(x>0){
		tong=tong+x%10;
		x=x/10;
	}
	printf("%d\n",tong);
	for(i=2;i<=a;)
	{
		if(a%i==0){ 
		printf("%d  ",i);
		a=a/i;
	}
		else i++;
	}
	
}
