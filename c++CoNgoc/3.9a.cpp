#include<iostream>
#include<fstream>
using namespace std;
class DaThuc{
	friend istream &operator>>(istream &, DaThuc &);
	friend ostream &operator<<(ostream &, DaThuc &);
	protected:
		int bac;
		float heso[20]={0};
	public:
		DaThuc(){
			bac=0;
		};
		void Nhap();
		void HienThi();
		void DocFile(ifstream &);
		void GhiFile(ofstream &);
		DaThuc Tong(DaThuc);
		DaThuc Hieu(DaThuc);
		DaThuc Tich(DaThuc);
		float GiaTri(float x);
		DaThuc operator+(DaThuc);     //chong toan tu;
};
DaThuc DaThuc::operator+(DaThuc dt2){
    DaThuc kq;
    kq.bac = (bac >dt2.bac)?bac:dt2.bac;
    for (int i= 0; i<= kq.bac; i++)
        kq.heso[i] = heso[i] + dt2.heso[i];
    return kq;
}
void DaThuc::Nhap(){
    do{
        cout<<"bac = "; cin>>bac;
    }while (bac<0);
    for (int i= bac; i>=0; i--){
        cout<<"heso["<<i<<"] = ";
		cin>>heso[i];
    }
}
void DaThuc::HienThi(){
    for (int i= bac; i>0;i--){
        cout<<heso[i]<<"x^"<<i;
        if (heso[i-1]>=0) cout<<"+";
    }
    cout<<heso[0];
}
float DaThuc::GiaTri(float x){
    float kq= heso[bac];
    for (int i= bac; i>0;i--){
        kq = kq*x + heso[i-1];
    }
    return kq;
}
DaThuc DaThuc::Tong(DaThuc dt2){
    DaThuc kq;
    kq.bac = (bac >dt2.bac)?bac:dt2.bac;
    for (int i= 0; i<= kq.bac; i++)
        kq.heso[i] = heso[i] + dt2.heso[i];
    return kq;
}
DaThuc DaThuc::Hieu(DaThuc dt2){
    DaThuc kq;
    kq.bac = (bac >dt2.bac)?bac:dt2.bac;
    for (int i= 0; i<= kq.bac; i++)
        kq.heso[i] = heso[i] - dt2.heso[i];
    return kq;
}
DaThuc DaThuc::Tich(DaThuc dt2){
	DaThuc kq;
	kq.bac=bac+dt2.bac;
	for(int i=0;i<=kq.bac;i++) kq.heso[i]=0;
	for(int i=0;i<=bac;i++)
		for(int j=0;j<=dt2.bac;j++)
			kq.heso[i+j]+=heso[i]*dt2.heso[j];
	return kq;
}
void DaThuc::DocFile(ifstream &doc){
	doc>>bac;
	for(int i=bac;i>=0;i--) doc>>heso[i];
}
void DaThuc::GhiFile(ofstream &ghi){
	ghi<<bac<<endl;
	for(int i=bac;i>=0;i--) ghi<<heso[i]<<" ";
	ghi<<endl;
}
istream &operator>>(istream &input, DaThuc &dt){
	input>>dt.bac;
	for(int i=dt.bac;i>=0;i--) input>>dt.heso[i];
}
ostream &operator<<(ostream &output, DaThuc &dt){
	for (int i= dt.bac; i>0;i--){
        output<<dt.heso[i]<<"x^"<<i;
        if (dt.heso[i-1]>=0) output<<"+";
    }
    output<<dt.heso[0];
    cout<<endl;
}
main(){
	ofstream ghi("dathuc.out",ios::out);
	DaThuc dt1,dt2;
	cin>>dt1;
	cin>>dt2;
	kq=dt1+dt2;
	cout<<kq;
}
