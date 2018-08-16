#include<iostream>
using namespace std;
class ChuSoNguyen{
	protected:
		int A[20],n,x;
	public:
		ChuSoNguyen(){x=0;};
		void Nhap();
		void TachSo();
		void In();
};
void ChuSoNguyen::Nhap(){
	cout<<"Nhap so x=";
	cin>>x;
}
void ChuSoNguyen::TachSo(){
	int i=0;
	int y=x;
	while(y>0){
		A[i]=y%10;
		y/=10;
		i++;
	}
	n=i;
}
void ChuSoNguyen::In(){
	for(int i=n-1;i>=0;i--)
		cout<<A[i]<<" ";
}
main(){
	ChuSoNguyen cs;
	cs.Nhap();
	cs.TachSo();
	cs.In();
}
