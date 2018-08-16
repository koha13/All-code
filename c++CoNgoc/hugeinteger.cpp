#include<iostream>
#include<cstring>
using namespace std;
class HugeInteger{
	protected:
		int a[40]={0};
		int size;
	public:
		void nhap();
		void hienthi();
		HugeInteger cong(HugeInteger);
		HugeInteger tru(HugeInteger);
		int lhhb(HugeInteger);
		HugeInteger nhan(HugeInteger);
		HugeInteger chia(HugeInteger);
};
void HugeInteger::nhap(){
	string s;
	cin>>s;
	int j=0;
	size=s.size();
	for(int i=size-1;i>=0;i--){
		a[j]=s[i]-48;
		j++;
	}
}
void HugeInteger::hienthi(){
	for(int i=size-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
}
int HugeInteger::lhhb(HugeInteger h){
	for(int i=40;i>=0;i--){
		if(a[i]>h.a[i]) return 1;
		if(a[i]<h.a[i]) return -1;
	}
	return 0;
}
HugeInteger HugeInteger::cong(HugeInteger h){
	HugeInteger kq;
	kq.size=(size>h.size)? size:h.size;
	int nho=0,tam;
	for(int i=0;i<kq.size;i++){
		tam=a[i]+h.a[i]+nho;
		kq.a[i]=tam%10;
		nho=tam/10;
	}
	if(nho>0){
		if(kq.size==40) cout<<"Tran so.\n";
		else{
			kq.size++;
			kq.a[kq.size-1]=nho;
		}
	}
	return kq;
}
HugeInteger HugeInteger::tru(HugeInteger h){
	HugeInteger kq;
	int nho=0,tam;
	if(lhhb(h)==0){
		kq.size=1;
		kq.a[0]=0;
		return kq;
	}
	if(lhhb(h)==1){
		kq.size=(size>h.size)? size:h.size;
		for(int i=0;i<kq.size;i++){
			if(a[i]>=h.a[i]+nho){
				kq.a[i]=a[i]-h.a[i]-nho;
				nho=0;
			}
			else{
				kq.a[i]=10+a[i]-h.a[i]-nho;
				nho=1;
			}
		}
		while(kq.a[kq.size-1]==0 && kq.size>1) kq.size--;
		return kq;
	}
}
HugeInteger HugeInteger::nhan(HugeInteger h){
	HugeInteger kq;
	kq.size=size+h.size;
	for(int i=0;i<size;i++)
		for(int j=0;j<h.size;j++)
			kq.a[i+j]+=a[i]*h.a[j];
	for(int i=0;i<kq.size;i++)
		if(kq.a[i]>9){
			kq.a[i+1]+=kq.a[i]/10;
			kq.a[i]%=10;
		} 
	while(kq.a[kq.size-1]==0 && kq.size>1) kq.size--;
	return kq;
}
HugeInteger HugeInteger::chia(HugeInteger h){
	HugeInteger kq=*this,count,mot;
	mot.size=1;
	mot.a[0]=1;
	count.size=1;
	count.a[0]=0;
	while(kq.lhhb(h)>=0){
		kq=kq.tru(h);
		count=count.cong(mot);
	}
	return count;
}
main(){
	HugeInteger h1,h2,kq;
	h1.nhap();
	h2.nhap();
	kq=h1.chia(h2);
	kq.hienthi();
}
