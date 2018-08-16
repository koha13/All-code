#include<iostream>
using namespace std;
int a,b;
void rutgon(int &tu, int &mau){
	int a,b;
	a=tu;
	b=mau;
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	tu/=a;
	mau/=a;
}
class Rational{
	friend void rutgon(int &tu, int &mau);            //ham ban dung de rut gon phan so
	protected:
		int tu,mau;
	public:
		Rational(){tu=0;mau=0;	};
		Rational(int, int);
		Rational operator+(Rational);
		Rational operator-(Rational);
		Rational operator*(Rational);
		Rational operator/(Rational);
		void hienthi();
		void hienthifloat();                         // hien thi duoi dang dau cham dong
		int gettu(){
			return tu;
		}
		int getmau(){
			return mau;
		}
};
Rational::Rational(int a, int b){
	if(a>=-100 && a<100) tu=a;
	else tu=0;
	if(b!=0 &&b>=-100 && b<100) mau=b;
	else mau=1;
	rutgon(tu,mau);
}
Rational Rational::operator+(Rational r){
	a=tu*r.getmau()+mau*r.gettu();
	b=mau*r.getmau();
	Rational kq(a,b);
	return kq;
}
Rational Rational::operator-(Rational r){
	a=tu*r.getmau()-mau*r.gettu();
	b=mau*r.getmau();
	Rational kq(a,b);
	return kq;
}
Rational Rational::operator*(Rational r){
	a=tu*r.gettu();
	b=mau*r.getmau();
	Rational kq(a,b);
	return kq;
}
Rational Rational::operator/(Rational r){
	a=tu*r.getmau();
	b=mau*r.gettu();
	Rational kq(a,b);
	return kq;
}
void Rational::hienthi(){
	cout<<tu<<"/"<<mau<<endl;
}
main(){
	Rational r1(2,4),r2(3,8),kq;
	kq=r1+r2;
	kq.hienthi();
	r1.hienthi();
}
