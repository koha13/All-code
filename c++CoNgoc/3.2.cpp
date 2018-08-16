#include<iostream>
using namespace std;
class BMI{
	protected:
		float cao,nang,chiso;
	public:
		BMI(){cao=nang=chiso=0;}
		BMI(float, float);
		void Nhap();
		void Tinh();
		void PhanLoai();
};
BMI::BMI(float a, float b){
	if(a>0 && a<3) cao=a;
	else cao=0;
	if(b>0 && b<300) nang=b;
	else nang=0;
}
void BMI::Nhap(){
	do{
		cout<<"Nhap chieu cao va can nang: ";
		cin>>cao>>nang;
	}
	while(cao<0 || nang<0 || cao>3 || nang>300);
}
void BMI::Tinh(){
	chiso=nang/cao/cao;
}
void BMI::PhanLoai(){
	if(chiso<18.5) cout<<"Thieu can\n";
	else if(chiso<25) cout<<"Trung binh\n";
	else if(chiso<30) cout<<"Thua can\n";
	else cout<<"Beo phi\n";
}
main(){
	BMI a;
	a.Nhap();
	a.Tinh();
	a.PhanLoai();
}
