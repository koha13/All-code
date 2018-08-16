#include<stdio.h>
main(){
	int n;
	long long s,s1,s2;
	s=s1=s2=0;
	scanf("%d",&n);
	printf("Tong cac so tu nhien khong lon hon %d : ",n);
	for(int i=1;i<=n;i++) s+=i; 
	printf("%lld\n",s);
	printf("Tong cac so tu nhien le khong lon hon %d : ",n);
	for(int i=1;i<=n;i++) if(i%2!=0) s1+=i; 
	printf("%lld\n",s1);
	printf("Tong cac so tu nhien chan khong lon hon %d : ",n);
	for(int i=1;i<=n;i++) if(i%2==0) s2+=i; 
	printf("%lld\n",s2);
}
