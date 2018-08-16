#include<iostream>
#include<fstream>
using namespace std;
char t[5];
class TracNghiem{
	protected:
		char cauhoi[70],tl1[100],tl2[100],tl3[100],tl4[100];
		int dapan,cautl;
	public:
		void doc(ifstream &);
		void hienthi();
		bool kiemtra();
};
void TracNghiem::doc(ifstream &f){
	f.getline(cauhoi,50);    //lay ca dong
	f.getline(tl1,50);
	f.getline(tl2,50);
	f.getline(tl3,50);
	f.getline(tl4,50);
	f>>dapan; f.getline(t,5);
}
void TracNghiem::hienthi(){
	cout<<cauhoi<<endl<<tl1<<endl<<tl2<<endl<<tl3<<endl<<tl4<<endl;
	cin>>cautl;
}
bool TracNghiem::kiemtra(){
	if(dapan==cautl) return true;
	return false;
}
class DSTracNghiem{
	protected:
		int n,dung;
		TracNghiem ds[10];
	public:
		void doc();
		void hienthi();
		void kiemtra();
		void phanloai();
};
void DSTracNghiem::doc(){
	ifstream f("bcvt.dat",ios::in);
	f>>n; f.getline(t,5);
	for(int i=1;i<=n;i++) ds[i].doc(f);
}
void DSTracNghiem::hienthi(){
	for(int i=1;i<=n;i++)
	{
		cout<<"Cau hoi thu "<<i<<" :\n";
		ds[i].hienthi();
	}
}
void DSTracNghiem::kiemtra(){
	int a=0;
	for(int i=1;i<=n;i++)
		if(ds[i].kiemtra()) a++;
	dung=a;
}
void DSTracNghiem::phanloai(){
	float kq;
	kq=dung/n;
	if(kq>0.8) cout<<"Xuat sac.\n";
	else if(kq>=0.6) cout<<"Rat tot.\n";
	else cout<<"Can phai tim hieu them ve truong!\n";
}
main(){
	DSTracNghiem k;
	k.doc();
	k.hienthi();
	k.kiemtra();
	k.phanloai();
}
