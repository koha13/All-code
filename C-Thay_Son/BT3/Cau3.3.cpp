#include<stdio.h>
void lk(int a, int b){
	int x,y;
		x=a;y=b;
		while(x!=y){
			if(x>y) x=x-y;
			else y=y-x;
		}
		if(x==1 && a<b) printf("%d %d\n",a,b);
		
	
}
main(){
	int a,b,i,j;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	for(j=a;j<=b;j++)
	lk(i,j);
	
}
