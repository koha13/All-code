#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;
class SinhVien{
	protected:
		char ho[10],dem[10],ten[10];
		int id,gt,diem;
	public:
		SinhVien();
		void nhap();
		void hienthi();
		void docfile(ifstream&);
		void ghifile(ofstream&);
		int sosanhTen(SinhVien);
		int getID(){
			return id;
		};
};
SinhVien::SinhVien(){
	strcpy(ten,""); strcpy(dem,""); strcpy(ho,"");
	id=gt=diem=0;
}
void SinhVien::nhap(){
	cout<<"Nhap ID: ";
	cin>>id;
	cout<<"Nhap ho, dem, ten cua sinh vien: ";
	cin>>ho>>dem>>ten;
	cout<<"Nhap gioi tinh: ";
	cin>>gt;
	cout<<"Nhap diem: ";
	cin>>diem;
}
void SinhVien::hienthi(){
	cout<<id<<endl;
	cout<<ho<<" "<<dem<<" "<<ten<<endl;
	cout<<gt<<endl;
	cout<<diem<<endl;
}
int SinhVien::sosanhTen(SinhVien sv1){
	if(strcmp(ten,sv1.ten)>0) return 1;
	if(strcmp(ten,sv1.ten)<0) return -1;
	if(strcmp(dem,sv1.dem)>0) return 1;
	if(strcmp(dem,sv1.dem)<0) return -1;
	if(strcmp(ho,sv1.ho)>0) return 1;
	if(strcmp(ho,sv1.ho)<0) return -1;
	return 0;
}
class DSSinhVien{
	protected:
		int n;
		SinhVien ds[20];
	public:
		void nhap();
		int timkiem(int );
		void sua(SinhVien);
		void xoa(int );
		void them(SinhVien);
		void hienthi();
		void sapxep();
};
void DSSinhVien::nhap(){
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	for(int i=1;i<=n;i++)
		ds[i].nhap();
}
void DSSinhVien::hienthi(){
	for(int i=1;i<=n;i++)
		ds[i].hienthi();
}
int DSSinhVien::timkiem(int a){
	for(int i=1;i<=n;i++)
		if(a==ds[i].getID()) return i;
}
void DSSinhVien::sua(SinhVien sv){
	int i;
	i=DSSinhVien::timkiem(sv.getID());
	ds[i]=sv;
}
void DSSinhVien::xoa(int a){
	int i=DSSinhVien::timkiem(a);
	for(int j=i;j<n;j++)
		ds[j]=ds[j+1];
	n=n-1;
}
void DSSinhVien::them(SinhVien sv){
	n=n+1;
	ds[n]=sv;
}
void DSSinhVien::sapxep(){
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++)
			if(!ds[i].sosanhTen(ds[j])){
				SinhVien t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}	
}
main(){
	SinhVien sv;
	DSSinhVien k;
	k.nhap();
	sv.nhap();
	k.them(sv);
	k.sapxep();
	k.hienthi();
}
