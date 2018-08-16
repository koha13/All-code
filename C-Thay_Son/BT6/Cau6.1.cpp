#include<stdio.h>
struct phanso{
	int tu;
	int mau;
};
int ucln(int a,int b){
	while(b!=0){
		a=a%b;
		int tg=a;
		a=b;
		b=tg;
	}
	return a;
}
void rutgon(int &a,int &b){
	int d=ucln(a,b);
	a/=d;
	b/=d;
}
void quydong(int &a,int &b,int &c,int &d){
	long long uc=a*b/ucln(a,b);
	c=c*uc/a;
	d=d*uc/b;
	a=uc;
	b=uc;
}
void tong(int a,int b,int c){
	struct phanso ps3;
	ps3.tu=a+b;
	ps3.mau=c;
	rutgon(ps3.tu,ps3.mau);
	printf("Tong = %lld/%lld\n",ps3.tu,ps3.mau);
}
void tich(int a,int b,int c,int d){
	struct phanso pstich;
	pstich.tu=a*c;
	pstich.mau=b*d;
	rutgon(pstich.tu,pstich.mau);
	printf("Tich = %lld/%lld\n",pstich.tu,pstich.mau);
}
void thuong(int a,int b){
	struct phanso psthuong;
	psthuong.tu=a;
	psthuong.mau=b;
	rutgon(psthuong.tu,psthuong.mau);
	printf("Thuong = %lld/%lld\n",psthuong.tu,psthuong.mau);
}

main(){
	struct phanso ps1,ps2;
	printf("Nhap phan so thu 1\n");
	scanf("%lld%lld",&ps1.tu,&ps1.mau);
	printf("Nhap phan so thu 2\n");
	scanf("%lld%lld",&ps2.tu,&ps2.mau);
	rutgon(ps1.tu,ps1.mau);
	rutgon(ps2.tu,ps2.mau);
	quydong(ps1.mau,ps2.mau,ps1.tu,ps2.tu);
	tong(ps1.tu,ps2.tu,ps1.mau);
	tich(ps1.tu,ps1.mau,ps2.tu,ps2.mau);
	thuong(ps1.tu,ps2.tu);
}
