#include<bits/stdc++.h>
using namespace std;
class Time{
	private:
		int gio,phut,giay;
	public:
		void nhap();
		bool lonhon(Time t1);
		void xuat();
};
void Time::xuat(){
	cout<<gio<<" "<<phut<<" "<<giay<<endl;
}
void Time::nhap(){
	cin>>gio>>phut>>giay;
}
bool Time::lonhon(Time t1){
	if(gio>t1.gio) return true;
	else if(gio==t1.gio){
		if(phut>t1.phut) return true;
		else if(phut==t1.phut){
			if(giay>t1.giay) return true;
		}
	}
	return false;
}
main(){
	int n;
	Time a[5001];
	cin>>n;
	for(int i=1;i<=n;i++) a[i].nhap();
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(a[i].lonhon(a[j])){
				Time tg;
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
	for(int i=1;i<=n;i++) a[i].xuat();
}
