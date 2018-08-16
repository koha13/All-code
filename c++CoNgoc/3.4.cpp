#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class CoSo{
	protected:
		int a,b;
		char s[20];
	public:
		CoSo(){a=b=0;};
		CoSo(int,int);
		void Nhap();
		void XuLy();
		void In();
};
CoSo::CoSo(int ta, int tb){
	a=ta;
	if(tb<=36 && tb>1) b=tb;
}
void CoSo::Nhap(){
	cout<<"Nhap so a = ";
	cin>>a;
	do{
		cout<<"Nhap co so b = ";
		cin>>b;
	}
	while(b>36 || b<=1);
}
void CoSo::XuLy(){
	itoa(a,s,b);       // truyen so a vao mang s theo co so b
}
void CoSo::In(){
	cout<<s;
}
main(){
	CoSo x(4587,16);
	x.XuLy();
	x.In();
}

