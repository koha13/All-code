#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Person{
	protected:
		char ten[20],diachi[20],tp[20],quan[20];
	public:
		void nhap();
		void hienthi();
};
void Person::nhap(){
	cout<<"Nhap: ";
	cin>>ten>>diachi>>tp>>quan;
}
void Person::hienthi(){
	cout<<ten<<diachi<<tp<<quan<<endl;
}
class Package{
	protected:
		Person nhan,gui;
		float kl,phi;
	public:
		virtual void nhap();
		virtual void hienthi();
		virtual float calculateCost();
};
void Package::nhap(){
	nhan.nhap();
	gui.nhap();
	cout<<"Nhap kl va phi: ";
	cin>>kl>>phi;
}
void Package::hienthi(){
	nhan.hienthi();
	gui.hienthi();
	cout<<kl<<endl<<phi<<endl;
}
float Package::calculateCost(){
	return (kl*phi);
}
class TwoDayPackage:public Package{
	protected:
		float philuukho;
	public:
		void nhap();
		void hienthi();
		float calculateCost();
};
void TwoDayPackage::nhap(){
	Package::nhap();
	cout<<"Nhap phi luu kho: ";
	cin>>philuukho;
}
void TwoDayPackage::hienthi(){
	Package::hienthi();
	cout<<"Phi luu kho: "<<philuukho<<endl;
}
float TwoDayPackage::calculateCost(){
	return (Package::calculateCost()+philuukho);
}
class OvernightPackage:public Package{
	protected:
		float phiphutroi;
	public:
		void nhap();
		void hienthi();
		float calculateCost();
};
void OvernightPackage::nhap(){
	Package::nhap();
	cout<<"Nhap phi phu troi: ";
	cin>>phiphutroi;
}
void OvernightPackage::hienthi(){
	Package::hienthi();
	cout<<"Phi phu troi: "<<phiphutroi<<endl;
}
float OvernightPackage::calculateCost(){
	return (Package::calculateCost()+phiphutroi*kl);
}
main(){
	vector<Package*> a;
	OvernightPackage o;
	a.push_back(new OvernightPackage);
	a.push_back(new OvernightPackage);
	a[0]->nhap();
	a[1]->nhap();
	cout<<a[0]->calculateCost()+a[1]->calculateCost();
}
