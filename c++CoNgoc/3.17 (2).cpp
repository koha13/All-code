#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
using namespace std;
class time1{
	protected:
		int h,m,s;
	public:
		time1(int =0, int=0, int=0);
		void nhap();
		void xuat();
		void seth(int);
		void setm(int);
		void sets(int);
		void tick();
};
time1::time1(int th, int tm, int ts){
	seth(th);
	setm(tm);
	sets(ts);
}
void time1::seth(int a){
	if(a>=0 && a<=23) h=a;
	else h=0;
}
void time1::setm(int a){
	if(a>=0 && a<=59) m=a;
	else m=0;
}
void time1::sets(int a){
	if(a>=0 && a<=59) s=a;
	else s=0;
}
void time1::nhap(){
	int th,tm,ts;
	cout<<"Nhap gio, phut, giay: ";
	cin>>th>>tm>>ts;
	seth(th);
	setm(tm);
	sets(ts);
}
void time1::xuat(){
	cout<<setfill('0')<<setw(2)<<((h==0||h==12)?12:h%12)<<":";
	cout<<setfill('0')<<setw(2)<<m<<":";
	cout<<setfill('0')<<setw(2)<<s;
	cout<<((h<12)?"AM":"PM");
	cout<<endl;
}
void time1::tick(){
	sets( ++s );
	if( s == 0 ){
		setm( ++m );
		if( m == 0 ) seth( ++h );
	}
}
main(){
	time1 t;
	t.nhap();
	for(int i=1;i<1000;i++){
		Sleep(1000);
		t.tick();
		t.xuat();
	}
}
