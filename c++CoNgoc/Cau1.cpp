#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
#include<vector>
using namespace std;
char t[5];
class Nguoi{
	protected:
		char hoten[20],diachi[20],sdt[20];
	public:
		void nhap();
};
void Nguoi::nhap(){
	cout<<"Nhap ho ten: "; gets(hoten);
	cout<<"Nhap dia chi: "; gets(diachi);
	cout<<"Nhap sdt: "; gets(sdt);
}
class BanDoc:public Nguoi{
	friend class QuanLy;
	friend vector<BanDoc> thembd();
	protected:
		int mathe,loai;
	public:
		void nhap(int );
		void ghifile(ofstream &);
		void xuat();
};
void BanDoc::nhap(int size){
	mathe=10000+size;
	Nguoi::nhap();
	cout<<"Nhap loai ban doc: \n";
	cout<<"1/Sinh vien.   2/Hoc vien cao hoc.   3/Giao vien.\n";
	cout<<"Lua chon: "; cin>>loai; gets(t);
}
void BanDoc::ghifile(ofstream &ghi){
	ghi<<mathe<<endl<<hoten<<endl<<diachi<<endl<<sdt<<endl<<loai<<endl;
}
void BanDoc::xuat(){
	cout<<left<<setw(6)<<mathe<<setw(20)<<hoten<<setw(20)<<diachi<<setw(15)<<sdt<<"  ";
	switch(loai){
		case 1:{
			cout<<"Sinh vien\n";
			break;
		}
		case 2:{
			cout<<"Hoc vien cao hoc\n";
			break;
		}
		case 3:{
			cout<<"Giao vien\n";
			break;
		}
	}
}
vector <BanDoc> thembd(){
	vector<BanDoc> dsBD;
	BanDoc b;
	ifstream ghi("BD.DAT",ios::in);
	while(!ghi.eof()){
		ghi>>b.mathe;
		ghi.getline(t,5);
		ghi.getline(b.hoten,20);
		ghi.getline(b.diachi,20);
		ghi.getline(b.sdt,15);
		ghi>>b.loai;
		ghi.getline(t,5);
		if(!ghi.eof())
			dsBD.push_back(b);
	}
	return dsBD;
}
class Sach{
	friend class QuanLy;
	friend vector<Sach> thems();
	protected:
		int masach,cn,namxb;
		char tens[20],tentg[20];
	public:
		void nhap(int);
		void ghifile(ofstream &);
		void xuat();
};
void Sach::nhap(int size){
	masach=1000+size;
	cout<<"Nhap ten sach: "; gets(tens);
	cout<<"Nhap ten tac gia: "; gets(tentg);
	cout<<"Nhap chuyen nganh: ";
	cout<<"1/KHTN.   2/VH-NT.   3/CNTT.\n";
	cout<<"Lua chon: "; cin>>cn; gets(t);
	cout<<"Nhap nam xuat ban: "; cin>>namxb; gets(t);
}
void Sach::ghifile(ofstream &ghi){
	ghi<<masach<<endl<<tens<<endl<<tentg<<endl<<cn<<endl<<namxb<<endl;
}
void Sach::xuat(){
	cout<<left<<setw(6)<<masach<<setw(20)<<tens<<setw(20)<<tentg<<setw(5)<<namxb<<"  ";
	switch(cn){
		case 1:{
			cout<<"KHTN\n";
			break;
		}
		case 2:{
			cout<<"HVH-NT\n";
			break;
		}
		case 3:{
			cout<<"CNTT\n";
			break;
		}
	}
}
vector<Sach> thems(){
	vector<Sach> dsSach;
	Sach s;
	ifstream ghi("SACH.DAT",ios::in);
	while(!ghi.eof()){
		ghi>>s.masach;
		ghi.getline(t,5);
		ghi.getline(s.tens,20);
		ghi.getline(s.tentg,20);
		ghi>>s.cn;
		ghi.getline(t,5);
		ghi>>s.namxb;
		ghi.getline(t,5);
		if(!ghi.eof())
			dsSach.push_back(s);
	}
	return dsSach;
}
class QuanLy{
	protected:
		BanDoc b;
		Sach s[5];
		int a[5],n=0;
	public:
		void muon(BanDoc, vector<Sach> );
		void ghifile(ofstream &);
		void xuat();
		int slsach();
		char *getten(){
			return b.hoten;
		};
};
int QuanLy::slsach(){
	int kq;
	for(int i=0;i<n;i++)
		kq=+a[i];
	return kq;
}
void QuanLy::muon(BanDoc b1, vector<Sach> dsSach){
	b=b1;
	int choice,temp;
	do{
		cout<<"1/Muon sach.\t2/Thoat.\n";
		cout<<"Lua chon: "; cin>>choice; gets(t);
		if(choice ==1){
			int kt=0;
			cout<<"Nhap ma sach muon muon: "; cin>>temp; gets(t);
			for(int i=0;i<n;i++)
				if(temp==s[i].masach){
					cout<<"Ban da muon sach nay roi!\n";
					kt=1;
				}
			if(kt==0){
				for(int i=0;i<dsSach.size();i++)
					if(temp==dsSach[i].masach){
						cout<<"Nhap so luong sach muon muon (Nho hon 3): ";
						cin>>a[n];
						s[n]=dsSach[i];
						n++;
					}
			}
		}
	}
	while(choice==1);
}
void QuanLy::xuat(){
	b.xuat();
	cout<<"Da muon:\n";
	for(int i=0;i<n;i++){
		s[i].xuat();
		cout<<"So luong: "<<a[i]<<endl;		
	}

}
void QuanLy::ghifile(ofstream &ghi){
	b.ghifile(ghi);
	for(int i=0;i<n;i++){
		s[i].ghifile(ghi);
		ghi<<"So luong: "<<a[i]<<endl;
	}
}
main(){
	ofstream ghibd("BD.DAT",ios::app);
	ofstream ghis("SACH.DAT",ios::app);
	ofstream ghids("QLMS.DAT",ios::app);
	vector<BanDoc> dsBD;
	vector<Sach> dsSach;
	QuanLy ql[20];
	int choice;
	do{
		cout<<"1. Nhap them sach\n2. Hien thi danh sach sach\n3. Them ban doc\n4. Hien thi danh sach ban doc\n5. QLMS\n6. Sx theo sl sach\n7. Sx theo ten.\n8. Tim kiem theo ten.\n";
		cout<<"Ban chon: "; cin>>choice; gets(t);
		switch(choice){
			case 1:{
				dsSach=thems();
				Sach s;
				s.nhap(dsSach.size());
				s.ghifile(ghis);
				break;
			}
			case 2:{
				dsSach=thems();
				for(int i=0;i<dsSach.size();i++)
					dsSach[i].xuat();
				break;
			}
			case 3:{
				dsBD=thembd();
				BanDoc b;
				b.nhap(dsBD.size());
				b.ghifile(ghibd);
				break;
			}
			case 4:{
				dsBD=thembd();
				for(int i=0;i<dsBD.size();i++)
					dsBD[i].xuat();
				break;
			}
			case 5:{
				dsSach=thems();
				dsBD=thembd();
				for(int i=0;i<dsBD.size();i++){
					dsBD[i].xuat();
					ql[i].muon(dsBD[i],dsSach);
					ql[i].ghifile(ghids);
				}
				break;
			}
			case 6:{
				for(int i=0;i<dsBD.size();i++)
					for(int j=i+1;j<dsBD.size();j++)
						if(ql[i].slsach()<ql[j].slsach()){
							QuanLy tm;
							tm=ql[i];
							ql[i]=ql[j];
							ql[j]=tm;
						}
				for(int i=0;i<dsBD.size();i++)
					ql[i].xuat();
				break;
			}
			case 7:{
				for(int i=0;i<dsBD.size();i++)
					for(int j=i+1;j<dsBD.size();j++)
						if(strcmp(ql[i].getten(),ql[j].getten())<0){
							QuanLy tm;
							tm=ql[i];
							ql[i]=ql[j];
							ql[j]=tm;
						}
				for(int i=0;i<dsBD.size();i++)
					ql[i].xuat();
				break;
			}
			case 8:{
				cout<<"Nhap vao ten ban doc: ";
				char tm[20];
				gets(tm);
				for(int i=0;i<dsBD.size();i++)
					if(strcmp(tm,ql[i].getten())==0) ql[i].xuat();
				break;
			}
		}
	}
	while(1);
}
