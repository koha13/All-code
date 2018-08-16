#include <bits/stdc++.h>
using namespace std;
char t[5];
class Nguoi{
	protected:
		char hoten[20],diachi[20],sdt[15];
	public:
		void nhap();
};
void Nguoi::nhap(){
	cout<<"Nhap ho ten: "; gets(hoten);
	cout<<"Nhap dia chi: "; gets(diachi);
	cout<<"Nhap sdt: "; gets(sdt);
}
class CauThu:public Nguoi{
	friend class PhanCong;
	friend vector<CauThu> themct();
	protected:
		int mact, luong;
	public:
		void nhap(int );
		void ghifile(ofstream &);
		void xuat();
};
void CauThu::nhap(int size){
	mact=100+size;
	Nguoi::nhap();
	cout<<"Nhap muc luong: "; cin>>luong;
	gets(t);
}
void CauThu::ghifile(ofstream &ghi){
	ghi<<mact<<endl<<hoten<<endl<<diachi<<endl<<sdt<<endl<<luong<<endl;
}
void CauThu::xuat(){
	cout<<left<<setw(5)<<mact<<setw(20)<<hoten<<setw(15)<<diachi<<setw(15)<<sdt<<"  "<<luong<<endl;
}
class ViTri{
	friend class PhanCong;
	friend vector<ViTri> themvt();
	protected:
		int mavt,thuong;
		char tenvt[20];
	public:
		void nhap(int );
		void ghifile(ofstream &);
		void xuat();
};
void ViTri::nhap(int size){
	mavt=100+size;
	cout<<"Nhap vi tri: "; gets(tenvt);
	cout<<"Nhap muc thuong: "; cin>>thuong;
	gets(t);
}
void ViTri::ghifile(ofstream &ghi){
	ghi<<mavt<<endl<<tenvt<<endl<<thuong<<endl;
}
void ViTri::xuat(){
	cout<<left<<setw(5)<<mavt<<setw(20)<<tenvt<<"  "<<thuong<<endl;
}
vector<CauThu> themct(){
	ifstream ghi("CT.DAT",ios::in);
	vector<CauThu> dsCT;
	CauThu ct;
	while(!ghi.eof()){
		ghi>>ct.mact;
		ghi.getline(t,5);
		ghi.getline(ct.hoten,20);
		ghi.getline(ct.diachi,20);
		ghi.getline(ct.sdt,15);
		ghi>>ct.luong;
		ghi.getline(t,5);
		if(!ghi.eof())
			dsCT.push_back(ct);
	}
	return dsCT;
}
vector<ViTri> themvt(){
	ifstream ghi("VITRI.DAT",ios::in);
	vector<ViTri> dsVT;
	ViTri vt;
	while(!ghi.eof()){
		ghi>>vt.mavt;
		ghi.getline(t,5);
		ghi.getline(vt.tenvt,20);
		ghi>>vt.thuong;
		ghi.getline(t,5);
		if(!ghi.eof())
			dsVT.push_back(vt);
	}
	return dsVT;
}
class PhanCong{
	protected:
		CauThu ct;
		ViTri vt[3];
		int a[3]={0},n=0;
	public:
		void quanly(CauThu, vector<ViTri> );
		void xuat();
		void ghifile(ofstream &);
		char *getten(){
			return ct.hoten;
		};
		void tinhluon();
};
void PhanCong::tinhluon(){
	ct.xuat();
	cout<<"Nhan luong: ";
	float kq=0;
	for(int i=0;i<n;i++)
		kq+=vt[i].thuong*a[i];
	kq+=ct.luong/10;
	cout<<kq<<endl;
}
void PhanCong::quanly(CauThu ct1, vector<ViTri> dsVT){
	ct=ct1;
	int choice,temp;
	do{
		if(n<3){
			cout<<"1.Them vi tri\t\t2.Thoat\n";
			cout<<"Lua chon: "; cin>>choice; gets(t);
			if(choice==1){
				cout<<"Nhap ma vi tri: "; cin>>temp; gets(t);
				int kt=0;
				for(int i=0;i<n;i++)
					if(temp==vt[i].mavt){
						cout<<"Vi tri da duoc lua chon.\n";
						kt=1;
					}
				if(kt==0){
					for(int i=0;i<dsVT.size();i++){
						if(temp==dsVT[i].mavt){
							vt[n]=dsVT[i];
							cout<<"Nhap so ngay da choi o vi tri nay: "; cin>>a[n]; gets(t);
							n++;
						}
					}
				}
			}
		}
	}
	while(choice==1);
}
void PhanCong::xuat(){
	ct.xuat();
	cout<<"Da choi: \n";
	for(int i=0;i<n;i++)
		vt[i].xuat();
}
void PhanCong::ghifile(ofstream &ghi){
	ct.ghifile(ghi);
	ghi<<"Da choi: \n";
	for(int i=0;i<n;i++)
		vt[i].ghifile(ghi);
}
main(){
	ofstream ghict("CT.DAT",ios::app);
	ofstream ghivt("VITRI.DAT",ios::app);
	ofstream ghids("PCCT.DAT",ios::app);
	vector<CauThu> dsCT;
	vector<ViTri> dsVT;
	int choice;
	PhanCong pc[20];
	do{
		cout<<"1.Nhap them cau thu.\n2.Hien ds cau thu.\n3.Them vi tri.\n4.Hien ds vi tri.\n";
		cout<<"5.Phan cong vi tri.\n6.Sx theo ho ten.\n7.Sx theo so ngay.\n8.Tinh luong.\n";
		cout<<"Lua chon: ";
		cin>>choice; gets(t);
		switch(choice){
			case 1:{
				CauThu ct; dsCT=themct();
				ct.nhap(dsCT.size()); ct.ghifile(ghict);
				break;
			}
			case 2:{
				dsCT=themct();
				for(int i=0;i<dsCT.size();i++)
					dsCT[i].xuat();
				break;
			}
			case 3:{
				ViTri vt; dsVT=themvt();
				vt.nhap(dsVT.size()); vt.ghifile(ghivt);
				break;
			}
			case 4:{
				dsVT=themvt();
				for(int i=0;i<dsVT.size();i++)
					dsVT[i].xuat();
				break;
			}
			case 5:{
				dsCT=themct();
				dsVT=themvt();
				for(int i=0;i<dsCT.size();i++){
					dsCT[i].xuat();
					pc[i].quanly(dsCT[i],dsVT);
					pc[i].ghifile(ghids);
				}
				break;
			}
			case 6:{
				for(int i=0;i<dsCT.size();i++)
					for(int j=i+1;j<dsCT.size();j++)
						if(strcmp(pc[i].getten(),pc[j].getten())<0){
							PhanCong tm;
							tm=pc[i];
							pc[i]=pc[j];
							pc[j]=tm;
						}
				for(int i=0;i<dsCT.size();i++)
					pc[i].xuat();
				break;
			}
			case 8:{
				for(int i=0;i<dsCT.size();i++)
					pc[i].tinhluon();
				break;
			}
		}
	}
	while(1);
}
