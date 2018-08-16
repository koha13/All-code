#include<stdio.h>
struct sophuc{
	int thuc;
	int ao;
};
void tong(int a,int b,int c,int d){
	struct sophuc sptong;
	sptong.thuc=a+c;
	sptong.ao=b+d;
	printf("Tong = %d + %di\n",sptong.thuc,sptong.ao);
}
void tich(int a,int b,int c,int d){
	struct sophuc sptich;
	sptich.thuc=a*b-b*d;
	sptich.ao=a*d+b*c;
	printf("Tich = %d + %di\n",sptich.thuc,sptich.ao);
}
void thuong(int a,int b,int c,int d){
	double tu=(double)(a*c+b*d)/(c*c+d*d);
	double mau=(double)(c*b-a*d)/(c*c+d*d);
	printf("Thuong = %llf + %llfi\n",tu,mau);
}
main(){
	struct sophuc sp1,sp2;
	scanf("%d%d",&sp1.thuc,&sp1.ao);
	scanf("%d%d",&sp2.thuc,&sp2.ao);
	tong(sp1.thuc,sp1.ao,sp2.thuc,sp2.ao);
	tich(sp1.thuc,sp1.ao,sp2.thuc,sp2.ao);
	thuong(sp1.thuc,sp1.ao,sp2.thuc,sp2.ao);
}
