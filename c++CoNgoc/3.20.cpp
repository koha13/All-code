#include<iostream>
#include<cstring>
#include<cmath>
#include<stdlib.h>
using namespace std;
class So{
	protected:
		int k,n,b;         //k,n,b nhu de bai
	public:
		void nhap();
		void hienthi();
		bool ngto();
		bool thuannghich();
		bool ktra();
		void lietke();
};
void So::nhap(){
	cout<<"Nhap k,n,b: ";
	cin>>k>>n>>b;
}
bool So::ngto(){
	if(k<2) return false;
	for(int i=2;i<=sqrt(k);i++)
		if(k%i==0) return false;
	return true;
}
bool So::thuannghich(){
	int x=k,dao=0;
	while(x>0){
		dao=dao*10+x%10;
		x/=10;
	}
	if(dao==k) return true;
	return false;
}
bool So::ktra(){
	char s[20];
	itoa(k,s,b);
	char s1[20];
	strcpy(s1,s);
	strrev(s1);
	if(strcmp(s1,s)==0) return true;
	return false;
}
void So::hienthi(){
	if(ktra() && ngto() && thuannghich()) cout<<k<<endl;
}
void So::lietke(){
	int x=pow(10,n);
	for(int i=pow(10,n-1);i<x;i++){
		k=i;
		hienthi();
	}
}
main(){
	So a;
	a.nhap();
	a.lietke();
}
