#include<iostream>
using namespace std;
class MaTran{
	protected:
		int dong,cot,a[20][20];
	public:
		MaTran(){
			dong=cot=0;                
		};
		void Nhap();
		void HienThi();
		MaTran Tong(MaTran);
		MaTran Tich(MaTran);
};
void MaTran::Nhap(){
	cin>>dong>>cot;
	for(int i=0;i<dong;i++)
		for(int j=0;j<cot;j++) cin>>a[i][j];
}
void MaTran::HienThi(){
	cout<<dong<<" "<<cot<<endl;;
	for(int i=0;i<dong;i++){
		for(int j=0;j<cot;j++) 
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
MaTran MaTran::Tong(MaTran mt2){
	MaTran kq;
	if(dong!=mt2.dong || cot!=mt2.cot){
		kq.cot=kq.dong=0;
	}
	kq.dong=dong;
	kq.cot=cot;
	for(int i=0;i<dong;i++)
		for(int j=0;j<cot;j++) kq.a[i][j]=a[i][j]+mt2.a[i][j];
	return kq;
}
MaTran MaTran::Tich(MaTran mt2){
	MaTran kq;
	if(cot!=mt2.dong){
		kq.dong=kq.cot=0;
	}
	kq.dong=dong;
	kq.cot=mt2.cot;
	for(int i=0;i<kq.dong;i++)
		for(int j=0;j<kq.cot;j++) kq.a[i][j]=0;
	for(int i=0;i<dong;i++)
		for(int j=0;j<mt2.cot;j++)
			for(int k=0;k<cot;k++) kq.a[i][j]+=a[i][k]*mt2.a[k][j];
	return kq;
}
main(){
	MaTran mt1,mt2,kq;
	mt1.Nhap();
	mt2.Nhap();
	kq=mt1.Tich(mt2);
	kq.HienThi();
	kq=mt1.Tong(mt2);
	kq.HienThi();
}
