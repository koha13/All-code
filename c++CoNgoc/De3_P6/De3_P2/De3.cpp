#include<iostream>
#include<fstream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<iomanip>
using namespace std;

class MatHang {
	friend class BangDSMH;
	int id;
	float gia;
	char ten[40], nhom[20];
	// Private section
	public:
		int getID();
		void setID(int);
		char* getTen();
		float getGia();
		friend istream &operator>>(istream &, MatHang &);
		friend ostream &operator<<(ostream &, MatHang &);
		friend void ghiMH(MatHang);
		friend vector<MatHang> docMH();
		
		// Public Declarations
	protected:
		// Protected Declarations
};

float MatHang::getGia(){
	return gia;
}

void MatHang::setID(int i){
	id = i;
}

int MatHang::getID(){
	return id;
}

char* MatHang::getTen(){
	return ten;
}

istream &operator>>(istream &is, MatHang &m){
	cout<<"\nNhap ten MH: ";
	is.getline(m.ten,40);
	cout<<"\nNhap nhom MH: ";
	is.getline(m.nhom,20);
	cout<<"\nNhap gia MH: ";
	is>>m.gia;
	return is;
}

ostream &operator<<(ostream &os, MatHang &m){
	os<<left<<setw(10)<<m.id<<setw(20)<<m.ten<<setw(20)<<m.nhom<<setw(10)<<m.gia<<endl;
	//cout<<m<<n<<m2;
	return os;
}

void ghiMH(MatHang m){
	ofstream ofs("MH.DAT",ios::app);
	ofs.write(reinterpret_cast<const char*>(&m),sizeof(MatHang));
	ofs.close();
}

vector<MatHang> docMH(){
	vector<MatHang> list;
	ifstream ifs("MH.DAT");
	if(ifs != NULL){
		while(!ifs.eof()){
			MatHang m;
			ifs.read(reinterpret_cast<char*>(&m),sizeof(MatHang));
			if(!ifs.eof())
				list.push_back(m);
		}
	}
	ifs.close();
	return list;
}
class Nguoi {	
	// Private section
	public:
		char* getTen();
		char* getDC();
		char* getSDT();
		// Public Declarations
	protected:
		char ten[40], diaChi[20], soDT[20];
		// Protected Declarations
};

char* Nguoi::getTen(){
	return ten;
}

char* Nguoi::getDC(){
	return diaChi;
}

char* Nguoi::getSDT(){
	return soDT;
}

class KhachHang :public Nguoi{
	friend class BangDSMH;
	int id;
	char loai[20];
	// Private section
	public:
		int getID();
		void setID(int);
		friend istream &operator>>(istream &, KhachHang &);
		friend ostream &operator<<(ostream &, KhachHang &);
		friend void ghiKH(KhachHang);
		friend vector<KhachHang> docKH();
		// Public Declarations
	protected:
		// Protected Declarations
};

int KhachHang::getID(){
	return id;
}

void KhachHang::setID(int i){
	id = i;
}

istream &operator>>(istream &is, KhachHang &m){
	cout<<"\nNhap ten KH: ";
	is.getline(m.ten,40);
	cout<<"\nNhap DC KH: ";
	is.getline(m.diaChi,20);
	cout<<"\nNhap SDT: ";
	is.getline(m.soDT,20);
	cout<<"\nNhap Loai KH: ";
	is.getline(m.loai,20);
	return is;
}

ostream &operator<<(ostream &os, KhachHang &m){
	os<<left<<setw(10)<<m.id<<setw(20)<<m.getTen()<<setw(20)<<m.getDC()
		<<setw(20)<<m.getSDT()<<setw(10)<<m.loai<<endl;
	//cout<<m<<n<<m2;
	return os;
}

void ghiKH(KhachHang m){
	ofstream ofs("KH.DAT",ios::app);
	ofs.write(reinterpret_cast<const char*>(&m),sizeof(KhachHang));
	ofs.close();
}

vector<KhachHang> docKH(){
	vector<KhachHang> list;
	ifstream ifs("KH.DAT");
	if(ifs != NULL){
		while(!ifs.eof()){
			KhachHang m;
			ifs.read(reinterpret_cast<char*>(&m),sizeof(KhachHang));
			if(!ifs.eof())
				list.push_back(m);
		}
	}
	ifs.close();
	return list;
}

class BangDSMH {
	// Private section
	int soLuong;
	KhachHang khach;
	MatHang mat;
	public:
		BangDSMH();
		BangDSMH(KhachHang, MatHang, int);
		int getSL();
		MatHang getMH();
		KhachHang getKH();
		// Public Declarations
	protected:
		// Protected Declarations
};

BangDSMH::BangDSMH(){
	
}

BangDSMH::BangDSMH(KhachHang k, MatHang m, int sl){
	khach = k;
	mat= m;
	soLuong = sl;
}

int BangDSMH::getSL(){
	return soLuong;
}

KhachHang BangDSMH::getKH(){
	return khach;
}

MatHang BangDSMH::getMH(){
	return mat;
}

bool daMua(vector<BangDSMH> list, int mhid, int khid){
	for(int i = 0; i<list.size(); i++){
		BangDSMH b = list[i];
		if(b.getKH().getID() == khid && b.getMH().getID() == mhid)
			return true;
	}
	return false;
}

void xuat(vector<BangDSMH> list){
	
	cout<<left<<setw(10)<<"ID KH"<<setw(20)<<"Ten KH"<<setw(10)<<"ID MH"
		<<setw(20)<<"Ten MH"<< setw(10)<<"So Luong"<< endl;
		
	for(int i = 0; i< list.size(); i++){
		
		BangDSMH b = list[i];
		
		cout<<left<<setw(10)<<b.getKH().getID()<<setw(20)<<b.getKH().getTen()
			<<setw(10)<<b.getMH().getID()
			<<setw(20)<<b.getMH().getTen()<< setw(10)<<b.getSL()<< endl;
		
	}
}

void ghiQLBH(vector<BangDSMH> list){
	ofstream ofs("QLBH.DAT",ios::app);
	for(int i = 0; i< list.size(); i++){
		
		BangDSMH b = list[i];
		
		ofs.write(reinterpret_cast<const char*>(&b),sizeof(BangDSMH));
	}
	ofs.close();
}

// nguyen van an
//tran van an


string tachTen(string s){
	string tenHo= s.substr(s.find_last_of(" ")+1, s.length()-1);
	tenHo+= s.substr(0, s.find_first_of(" ")-1);
	return tenHo;
}

bool theoTenKH(BangDSMH b1, BangDSMH b2){
	string t1(b1.getKH().getTen());
	string t2(b2.getKH().getTen());
	string ten1 = tachTen(t1);
	string ten2 = tachTen(t2);
	return ten1 < ten2;
}

bool theoTenMH(BangDSMH b1, BangDSMH b2){
	return stricmp(b1.getMH().getTen(),b2.getMH().getTen()) < 0;
}

int main(){
	int lc;
	vector<MatHang> listM = docMH();
	vector<KhachHang> listK ;listK= docKH();
	vector<BangDSMH> list;
	
	do{
		cout<<"\n=====MENU=====\n1. Them mat hang vao file.\n2. Xuat DS MH."
			<<"\n3. Them KH.\n4. Hien thi DS KH."
			<<"\n5. Lap DS mua hang cho cac KH.\n6. Sap xep."
			<<"\n7. Lap hoa don cho tung KH.\n0 Thoat."
			<<"\nBan chon ? ";
		cin>> lc;
		fflush(stdin);// xoa bo nho dem
		cout<<"\n================================================================================\n\n";
		switch(lc){
			case 0: break;
			case 1:{
				MatHang m;
				cin>> m;
				m.setID(1000+listM.size());
				listM.push_back(m);
				ghiMH(m);
				break;
			}
			
			case 2:{				
				if(listM.size() > 0){
					cout<<left<<setw(10)<<"ID"<<setw(20)<<"Ten MH"
					<<setw(20)<<"Nhom MH"<<setw(10)<<"Gia Ban"<<endl;
					for(int i = 0;i< listM.size(); i++){
						cout<< listM[i];
					}
				} else cout<<"\nDS trong.";
				break;
			}
			
			case 3:{
				KhachHang k;
				cin>> k;
				k.setID(100000+listK.size());
				listK.push_back(k);
				ghiKH(k);
				break;
			}
			
			case 4:{
				if(listK.size() > 0){
					cout<<left<<setw(10)<<"ID"<<setw(20)<<"Ten KH"<<setw(20)<<"DC"
						<<setw(20)<<"So DT"<<setw(10)<<"Loai KH"<<endl;
					for(int i = 0;i< listK.size(); i++){
						cout<< listK[i];
					}
				} else cout<<"\nDS trong.";
				break;
			}
			case 5:{
				int mhid; // ma MH can mua
				for(int i = 0; i<listK.size(); i++){
					int dem = 0;
					KhachHang k = listK[i];
					cout<<"\nNhap thong tin mua hang cho KH "<<k.getTen()<<": \n";
					
					while(true){
						
						if(dem>= 10) break;
						
						cout<<"\nNhap vao ma MH(nhap 0 de ket thuc mua hang): ";
						cin>> mhid;
						if(mhid == 0) break;
						
						if(mhid < listM[0].getID() || mhid > listM[listM.size()-1].getID()){
							cout<<"\nSai Ma MH. Thu lai!";
						} else{
							MatHang m;
							if(!daMua(list, mhid,k.getID())){
								for(int j = 0; j<listM.size(); j++){
									if(listM[j].getID() == mhid){
										m = listM[j];
										break;
									}
								}
								
								cout<<"\nNhap so luong hang: ";
								int sl;
								cin>> sl;
								dem++;
								BangDSMH b(k,m,sl);
								list.push_back(b);
							}
							else cout<<"\nMat Hang da mua.";
						}
					}
				}
				ghiQLBH(list);
				xuat(list);
				break;
			}
			case 6:{
				int chon;
				while(true){
					cout<<"======LUA CHON SAP XEP======\n1. SX theo ten KH\n2. Theo ten MH."
						<<"\n0. Tro lai MENU chinh. \n";
					cin>> chon;
					if(chon == 0) break;
					switch(chon){
						case 1:{
							sort(list.begin(), list.end(), theoTenKH);
							xuat(list);
							break;
						}
						
						case 2:{
							sort(list.begin(), list.end(), theoTenMH);
							xuat(list);// hien thi danh sach bang 
							break;
						}
					}
				}
				break;
			}
								
			case 7:{
				for(int i = 0; i< listK.size(); i++){
					cout<<left<<setw(10)<<"Ma KH"<<setw(20)<<"TenKH"<<setw(20)<<"Ten MH"
						<<setw(10)<<"So Luong" <<setw(10)<<"Don Gia"<<endl;
					int tongSL = 0;
					float tongTien = 0;
					KhachHang k = listK[i];
					
					cout<<left<<setw(10)<<k.getID()<<setw(20)<<k.getTen()<<endl;
					
					for(int j = 0; j< list.size(); j++){
						BangDSMH b = list[j];
						
						if(k.getID() == b.getKH().getID()){
							cout<<left<<setw(30)<<" "<<setw(20)<<b.getMH().getTen()
								<<setw(10)<<b.getSL() <<setw(10)<<b.getMH().getGia()<<endl;
							tongSL+= b.getSL();
							tongTien+= b.getSL()*b.getMH().getGia();
						}
					}
					cout<<setw(50)<<" "<<setw(10)<<"Tong SL"<<setw(10)<<"Thanh Tien"<<endl;
					cout<<setw(50)<<" "<<setw(10)<<tongSL<<setw(10)<<tongTien<<endl;
					cout<<"------------------------------------------------------------------------------\n";
				}
				break;
			}
		}
	}while(lc);
	return 0;
}
