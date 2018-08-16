#include<iostream>
using namespace std;
class ThuaSo{
	protected:
		int a,A[20],n;
	public:
		ThuaSo(){a=0;};
		void Nhap();
		void PhanTich();
		void HienThi();
};
void ThuaSo::Nhap(){
	do{
		cout<<"Nhap so a = ";
		cin>>a;
	}
	while(a<=0);
}
void ThuaSo::PhanTich(){
	int x=a,i=2,d=0;
	while(x!=1){
		if(x%i==0){
			A[d]=i;
			x/=i;
			d++;
		}
		else i++;
	}
	n=d;
}
void ThuaSo::HienThi(){
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
}
main(){
	ThuaSo t;
	t.Nhap();
	t.PhanTich();
	t.HienThi();
}
