#include<iostream>
#include<fstream>
#include<vector>
#include<cstring>
#include<iomanip>
using namespace std;
char t[5];
class Nguoi{
	protected:
		char ten[30],diachi[30],sdt[15];
	public:
		void nhap();
};
void Nguoi::nhap(){
	cout<<"Nhap ho ten: "; gets(ten);
	cout<<"Nhap dia chi: "; gets(diachi);
	cout<<"Nhap sdt: "; gets(sdt);
}
class Khach:public Nguoi{
	friend vector<Khach> them();
	friend class DanhSach;
	
	private:
		int makh,loaikh,c;
	public:
		void nhap(int size);
		void ghifile(ofstream &ghi);
		void xuat();
		
};
void Khach::nhap(int size){
	Nguoi::nhap();
	cout<<"Nhap loai kh: "; cin>>loaikh; gets(t);
	c=10000+size;
	makh=c;
}
void Khach::ghifile(ofstream &ghi){
	ghi<<makh<<endl<<ten<<endl<<diachi<<endl<<sdt<<endl<<loaikh<<endl;	
}
void Khach::xuat(){
	cout<<left<<makh<<"  "<<setw(20)<<ten<<setw(20)<<diachi<<setw(20)<<sdt<<setw(10)<<loaikh<<endl;
}
class Hang{
	friend vector<Hang> themhang();
	friend class DanhSach;
	protected:
		int mahang,gia,nhomhang,c;
		
		char tenhang[30];
	public:
		void nhap(int size);
		void xuat();
		void ghifile(ofstream &);
};
void Hang::nhap(int size){
	cout<<"Nhap ten mat hang: "; gets(tenhang);
	cout<<"Nhap nhom hang: "; cin>>nhomhang; gets(t);
	cout<<"Nhap gia ban: "; cin>>gia; gets(t);
	c=1000+size;
	mahang=c;
}
void Hang::xuat(){
	cout<<mahang<<"  "<<setw(20)<<tenhang<<setw(20)<<nhomhang<<setw(10)<<gia<<endl;
}
void Hang::ghifile(ofstream &ghi){
	ghi<<mahang<<endl<<tenhang<<endl<<nhomhang<<endl<<gia<<endl;
}

vector<Khach> them(){
	vector<Khach> k;
	ifstream ghi("KH.DAT",ios::in);
	while(!ghi.eof()){
		Khach kh;
		ghi>>kh.makh;
		ghi.getline(t,5);
		ghi.getline(kh.ten,30);
		ghi.getline(kh.diachi,30);
		ghi.getline(kh.sdt,15);
		ghi>>kh.loaikh;
		ghi.getline(t,5);
		if(!ghi.eof())
		k.push_back(kh);
	}
	return k;
}
vector<Hang> themhang(){
	vector<Hang> h;
	ifstream ghi("MH.DAT",ios::in);
	while(!ghi.eof()){
		Hang mh;
		ghi>>mh.mahang;
		ghi.getline(t,5);
		ghi.getline(mh.tenhang,30);
		ghi>>mh.nhomhang;
		ghi.getline(t,5);
		ghi>>mh.gia;
		ghi.getline(t,5);
		if(!ghi.eof())
		h.push_back(mh);
	}
	return h;
}
class DanhSach{
	private:
		Khach kh;
		Hang mh[10];
		int n=0;
		int a[10];
	public:
		void quanly(Khach k1, vector<Hang> h);
		void xuat();
		void ghifile(ofstream &);
		char *getten(){
			return kh.ten;
		};
};
void DanhSach::quanly(Khach k1, vector<Hang> h){
	kh=k1;
	kh.xuat();
	int temp,choice;
	do{
		cout<<"1. Mua hang.\n2. Exit.\n";
		cout<<"Lua chon: ";
		cin>>choice;
		if(choice==1){
			int kt=0;
			if(n<10){
				cout<<"Nhap ma hang muon mua: ";
				cin>>temp; gets(t);
				for(int i=0;i<n;i++)
					if(temp==mh[i].mahang){
						a[i]++;
						kt=1;
					}
				if(kt==0){
					for(int i=0;i<h.size();i++)
							if(temp==h[i].mahang){
							mh[n]=h[i];
							cout<<"Nhap so luong muon mua: ";
							cin>>a[n]; gets(t);
							n++;
						}
				}
			}
		}
	}
	while(choice==1);
}
void DanhSach::xuat(){
	kh.xuat();
	for(int i=0;i<n;i++)
		mh[i].xuat();
}
void DanhSach::ghifile(ofstream &ghi){
	kh.ghifile(ghi);
	for(int i=0;i<n;i++){
		mh[i].ghifile(ghi);
		cout<<"So luong: "<<a[i]<<endl;
	}
		
}
main(){
	ofstream ghi("KH.DAT",ios::app);
	ofstream ghihang("MH.DAT",ios::app);
	ofstream ghids("QLBH.DAT",ios::app);
	vector<Khach> k;
	vector<Hang> h;
	int choice;
	DanhSach ds[20];
	do{
		cout<<"1. Nhap them khach hang.\n";
		cout<<"2. Nhap them mat hang.\n";
		cout<<"3. Lap danh sach mua hang.\n";
		cout<<"4. Sap xep theo ten khach hang.\n";
		cout<<"5. Lap hoa don.\n";
		cout<<"Ban chon: ";
		cin>>choice; gets(t);
		switch(choice){
			case 1:{
				Khach kh; k=them();
				kh.nhap(k.size()); kh.ghifile(ghi); k=them();
				for(int i=0;i<k.size();i++) k[i].xuat();
				break;
			}
			case 2:{
				Hang mh; h=themhang();
				mh.nhap(h.size());
				mh.ghifile(ghihang); h=themhang();
				for(int i=0;i<h.size();i++) h[i].xuat();
				break;
			}
			case 3:{
				k=them(); h=themhang();
				for(int i=0;i<k.size();i++){
					ds[i].quanly(k[i],h);
					ds[i].ghifile(ghids);
				}
				break;
			}
			case 4:{
				for(int i=0;i<k.size();i++)
					for(int j=i+1;j<k.size();j++)
						if(strcmp(ds[i].getten(),ds[j].getten())>0){
							DanhSach tm;
							tm=ds[i];
							ds[i]=ds[j];
							ds[j]=tm;
						}
				for(int i=0;i<k.size();i++)
					ds[i].xuat();
				break;
			}
		}
	}
	while(choice!=6);
}
