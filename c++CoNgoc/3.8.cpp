#include<iostream>
#include<cmath>
using namespace std;
class Dinh{
	protected:
		float x,y;
	public:
		Dinh(){x=y=0;};
		void nhap();
		void hienthi();
		float getX(){
			return x;
		};
		float getY(){
			return y;
		};
		float canh(Dinh);
};
void Dinh::nhap(){
	cout<<"Nhap x,y: ";
	cin>>x>>y;
}
void Dinh::hienthi(){
	cout<<x<<" "<<y<<endl;
}
float Dinh::canh(Dinh p2){
    float t1,t2;
    t1 = p2.x - x;
    t2 = p2.y - y;
    return sqrt(t1*t1 + t2*t2);
}
class DaGiac:public Dinh{
	protected:
		int n;              //so luong cac dinh
		Dinh a[20];
	public:
		DaGiac(){
			n=0;
		};
		void nhap();
		void hienthi();
		void kiemtra();
		void loai();
		float dientich();
		float chuvi();
};
void DaGiac::nhap(){
	cout<<"Nhap so dinh n = ";
	cin>>n;
	for(int i=1;i<=n;i++)
		a[i].nhap();
}
void DaGiac::hienthi(){
	for(int i=1;i<=n;i++)
		a[i].hienthi();
}
void DaGiac::loai(){
	if(n==3) cout<<"Tam giac\n";
	if(n==4){
		float a1,a2,a3,a4,b1,b2,b3,b4;
		a1=a[1].getX()-a[2].getX();
		a2=a[2].getX()-a[3].getX();
		a3=a[4].getX()-a[3].getX();
		a4=a[1].getX()-a[4].getX();
		b1=a[1].getY()-a[2].getY();
		b2=a[2].getY()-a[3].getY();
		b3=a[4].getY()-a[3].getY();
		b4=a[1].getY()-a[4].getY();
		if(a[1].canh(a[2])==a[2].canh(a[3])
		&& a[2].canh(a[3])==a[3].canh(a[4]) && a[3].canh(a[4])==a[4].canh(a[1])){
			if(a1*a2+b1*b2==0) cout<<"Hinh vuong.\n";
			else cout<<"Hinh thoi.\n";
		}
		else if(a[1].canh(a[2])==a[3].canh(a[4]) && a[2].canh(a[3])==a[4].canh(a[1])){
			if(a1*a2+b1*b2==0) cout<<"Hinh chu nhat.\n";
			else cout<<"Hinh binh hanh.\n";
		}
		else if(-a1*b3+b1*a3==0 || a2*b4-b2*a4==0) cout<<"Hinh thang.\n";
		else cout<<"Hinh tu giac.\n";
	}
}
float DaGiac::dientich(){
	float s=0;
	for(int i=1;i<n;i++)
		s=s+(a[i+1].getX()-a[i].getX())*(a[i+1].getY()+a[i].getY());
	s=s+(a[1].getX()-a[n].getX())*(a[1].getY()+a[n].getY());
	return abs(s)/2;
}
float DaGiac::chuvi(){
	float s=0;
	for(int i=1;i<n;i++)
		s+=a[i].canh(a[i+1]);
	s+=a[n].canh(a[1]);
	return s;
}
main(){
	DaGiac d;
	d.nhap();
	d.loai();
	cout<<d.dientich()<<" "<<d.chuvi();
	Dinh d1,d2;
}
