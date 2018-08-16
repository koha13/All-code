#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
#include<iomanip>
using namespace std;
char t[5];
class Nguoi{
	protected:
		char hoten[30],diachi[30],sdt[20];
	public:
		void nhap();
};
void Nguoi::nhap(){
	cout<<"Nhap ho ten : "; gets(hoten);
	cout<<"Nhap dia chi : "; gets(diachi);
	cout<<"Nhap sdt : "; gets(sdt);
}
class BanDoc:public Nguoi{
	friend void them(vector<BanDoc> &bd);
	friend class QuanLy;
	private:
		static int c;
		int mathe,loai;
	public:
		void nhap();
		void ghifile(ofstream &);
		void xuat();
};
void BanDoc::xuat(){
	cout<<mathe<<" "<<setw(25)<<hoten<<setw(20)<<diachi<<setw(12)<<sdt<<setw(5)<<loai<<endl;
}
void BanDoc::nhap(){
	Nguoi::nhap();
	cout<<"Nhap loai ban doc: "; cin>>loai;
	gets(t);
	mathe=c;
	c++;
}
void BanDoc::ghifile(ofstream &ghi){
	ghi<<mathe<<endl<<hoten<<endl<<diachi<<endl<<sdt<<endl<<loai<<endl;
}
void them(vector<BanDoc> &bd){
	ifstream ghi("BD.DAT",ios::in);
	while(!ghi.eof()){
		BanDoc b;
		ghi>>b.mathe;
		ghi.getline(t,5);
		ghi.getline(b.hoten,50);
		ghi.getline(b.diachi,50);
		ghi.getline(b.sdt,20);
		ghi>>b.loai;
		ghi.getline(t,5);
		if(!ghi.eof()) bd.push_back(b);
	}
}
class Sach{
	friend class QuanLy;
	friend void themsach(vector<Sach> &book);
	private:
		static int c;
		int masach,namxb;
		char tensach[40],tentg[40],cn[40];
	public:
		void nhap();
		void ghifile(ofstream &);
		int getmasach(){
			return masach;
		};
		void xuat();
};
void Sach::xuat(){
	cout<<masach<<" "<<setw(20)<<tensach<<setw(20)<<tentg<<setw(20)<<cn<<"\t"<<namxb;
}
void Sach::nhap(){
	masach=c;
	c++;
	cout<<"Ma "<<masach<<endl;
	cout<<"Nhap ten sach: "; gets(tensach);
	cout<<"Nhap ten tac gia: "; gets(tentg);
	cout<<"Chuyen nganh: "; gets(cn);
	cout<<"Nhap nam xuat ban: "; cin>>namxb;
	gets(t);
	
}
void Sach::ghifile(ofstream &ghi){
	ghi<<masach<<endl<<tensach<<endl<<tentg<<endl<<cn<<endl<<namxb<<endl;
}
void themsach(vector<Sach> &book){
	
	ifstream ghi("SACH.DAT",ios::in);
	while(!ghi.eof()){
		Sach s;
		ghi>>s.masach;
		ghi.getline(t,5);
		ghi.getline(s.tensach,50);
		ghi.getline(s.tentg,50);
		ghi.getline(s.cn,50);
		ghi>>s.namxb;
		ghi.getline(t,5);
		if(!ghi.eof())
		book.push_back(s);
	}
	
}
int BanDoc::c=10000;
int Sach::c=10000;
class QuanLy{
	private:
		BanDoc b1;
		Sach s[5];
		int a[5]={0},n=0;
	public:
		void setBD(BanDoc);
		void muon(vector<Sach> book);
		void xuat();
};
void QuanLy::setBD(BanDoc b){
	b1=b;
}
void QuanLy::muon(vector<Sach> book){
	int temp,choice;
	n=0;
	cout<<"Ban doc: ";
	b1.xuat();
	do{
		cout<<"1. Muon sach.\n2. Thoat.\n";
		cout<<"Lua chon cua ban la: ";
		cin>>choice;
		if(choice==1){
				cout<<"Nhap ma sach muon: "; cin>>temp;
				int kt=0;
				for(int i=0;i<=n;i++)
					if(temp==s[i].masach){
						a[i]++;
						kt=1;
					}
				if(kt==0)
					for(int i=0;i<book.size();i++)
						if(temp==book[i].masach){
							s[n]=book[i];
							a[n]++;
							n++;
						}
		}
	}
	while(choice!=2);
	
}
void QuanLy::xuat(){
	b1.xuat();
	for(int j=0;j<n;j++){
		s[j].xuat();
		cout<<"\tSo luong: "<<a[j]<<" quyen."<<endl;
	}
}
main(){
	ofstream ghis("SACH.DAT", ios::app);
	ofstream ghi("BD.DAT", ios::app);
	vector<Sach> book;
	vector<BanDoc> bd;
	int choice;
	do{
		cout<<"1. Them ban doc.\n2. Them sach.\n3. Quan ly muon sach.\n";
		cout<<"Ban chon: ";
		cin>>choice;
		gets(t);
		switch(choice)
		{
			case 1:{
				BanDoc b;
				b.nhap();
				b.ghifile(ghi);
				break;
			}
			case 2:{
				Sach s;
				s.nhap();
				s.ghifile(ghis);
				break;
			}
			case 3:{
				QuanLy q[40];
				them(bd); themsach(book);
				int d=bd.size();
				for(int i=0;i<d;i++){
					q[i].setBD(bd[i]);
					q[i].muon(book);
				}
				for(int i=0;i<d;i++){
					q[i].xuat();
				}
				break;
			}
		}
	}
	while(choice==1||choice==2||choice==3);
}
