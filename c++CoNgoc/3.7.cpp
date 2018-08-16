#include<iostream>
using namespace std;
class DanhSach{
	protected:
		float a[20], int n;
	public:
		void Nhap();
		void Tim();
		void SapXep();
		void Chen(int);
		void Xoa(int);
		void HienThi();
};
void DanhSach::Nhap(){
	do{
		cout<<"Nhap do dai cua mang n = ";
		cin>>n;
	}
	while(n<1);
	cout<<"Nhap cac phan tu cua mang.\n";
	int i=0;
	while(i<n){
		cout<<"Nhap phan tu thu "<<i+1<<" :";
		cin>>a[i];
		if(a[i]>0 && a[i]<100) i++;
	}
}
void DanhSach::Tim(){
	int kt=1;
	for(int i=0;i<n-1;i++)
		if(a[i]!=a[i+1]) kt=0;
	if(kt==1) cout<<"Khong co so lon nhat\n";
	else{
			int max,maxin;
	max=a[0]; maxin=0;
	for(int i=0;i<n;i++)
		if(a[i]>max){
			max=a[i];
			maxin=i;
		}
	int smax,smaxin;
	for(int i=0;i<n;i++)
		if(a[i]<max){
			smax=a[i];
			smaxin=i;
			break;
		}
	for(int i=0;i<n;i++)
		if(a[i]>smax && a[i]<max){
			smax=a[i];
			smaxin=i;
		}
	cout<<"Max = "<<max<<" tai vi tri i = "<<maxin+1<<endl;
	cout<<"SemiMax = "<<smax<<" tai vi tri i = "<<smaxin+1<<endl;
	}
}
void DanhSach::SapXep(){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]<a[j]){
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
}
void DanhSach::Chen(int x){
	if(x<=a[n-1]){
		a[n]=x;
		n=n+1;
	}
	else{
		int i=n;
		while(a[i-1]<x && i>=0){
			a[i]=a[i-1];
			i--;
		}
		a[i]=x;
		n++;
	}
}
void DanhSach::Xoa(int x){
	for(int i=0;i<n;i++)
		if(a[i]==x){
			for(int j=i;j<n-1;j++) a[j]=a[j+1];
						n=n-1;
			break;
		}
}
void DanhSach::HienThi(){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	DanhSach ds;
	ds.Nhap();
	ds.Tim();
	ds.SapXep();
	ds.Chen(4);
	ds.HienThi();
	ds.Xoa(3);
	ds.HienThi();
}
