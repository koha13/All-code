#include<stdio.h>
main(){
	int n;
	long long s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) if(i%7==0) s+=i;
	printf("Tong cac chu so tu nhien khong lon hon %d chia het cho 7 la: %lld",n,s);
}
