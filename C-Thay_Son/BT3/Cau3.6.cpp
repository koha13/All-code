#include<stdio.h>
#include<math.h>
void us(int a){
	int i,dem=0;
	for(i=1;i<=a;i++)
		if(a%i==0){
			printf("%d\n",i);
			dem+=1;
		}
		printf("%d\n",dem);
}
int ktngto(int a){
	int i,kt=0;
	for(i=2;i<=sqrt(a);i++)
	if(a%i==0) kt=1;
	if(kt==1) return(0);
	else return(1);
}
void ungto(int a){
	int i;
	for(i=1;i<=a;i++)
		if(a%i==0 && ktngto(i))
			printf("%d\n",i);
}
main(){
	int a;
	scanf("%d",&a);
	us(a);
	ungto(a);
}
