#include<iostream>
#include<cstring>
using namespace std;
class khoa{
	protected:
		int a[40]={0},size;              //mang a luu so lon
	public:
		khoa(){size=0;};
		void nhap();
		void hienthi();
		khoa add(khoa);
		khoa subtract(khoa);
		khoa multiply(khoa);
		khoa divide(khoa);
		khoa modules(khoa);
		int isGreaterThan(khoa);          // kiem tra xem so nao lon hon
};
void khoa::nhap(){
	int j=0;
	string s;
	cin>>s;
	size=s.length();
	for(int i=size-1;i>=0;i--){
		a[j]=s[i]-'0';
		j++;
	}
}
void khoa::hienthi(){
	for(int i=size-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
}
khoa khoa::add(khoa c){
	khoa kq;
	int nho=0,tam;
	kq.size=max(size,c.size);
	for(int i=0;i<kq.size;i++){
		tam=a[i]+c.a[i]+nho;
		kq.a[i]=tam%10;
		nho=tam/10;
	}
	if(nho>0){
		if(kq.size==40)
			cout<<"Tran.\n";
		else{
			kq.size++;
			kq.a[kq.size-1]=1;
		}
	}
	return kq;
}
int khoa::isGreaterThan(khoa c){
	for(int i=40;i>=0;i--){
		if(a[i]>c.a[i]) return 1;
		if(a[i]<c.a[i]) return -1;
	}
	return 0;
}
khoa khoa::subtract(khoa c){
	int nho=0,tam;
	khoa kq;
	if(isGreaterThan(c)){
		kq.size=max(size,c.size);
		for(int i=0;i<kq.size;i++){
			if(a[i]<c.a[i]+nho){
				kq.a[i]=10+a[i]-c.a[i]-nho;
				nho=1;
			}
			else{
				kq.a[i]=a[i]-c.a[i]-nho;
				nho=0;
			}
		}
		while(kq.a[kq.size-1]==0 && kq.size>1) kq.size--;
	}
	else if(isGreaterThan(c)==0){
		kq.size=1;
		kq.a[0]=0;
	}
	else cout<<"Khong the tru.\n";
	return kq;
}
khoa khoa::multiply(khoa c){
	khoa kq;
	kq.size=size+c.size;
	for(int i=0;i<c.size;i++)
		for(int j=0;j<size;j++)
			{
				kq.a[i+j]+=c.a[i]*a[j];
			}
	for(int i=0;i<kq.size;i++)
		if(kq.a[i]>=10){
			kq.a[i+1]+=kq.a[i]/10;
			kq.a[i]%=10;
		}
	if(kq.a[kq.size-1]==0) kq.size--;
	return kq;
}
khoa khoa::divide(khoa c){
	khoa kq=*this,count,one;
	one.size=1; one.a[0]=1;
	while(kq.isGreaterThan(c)!=-1){
		kq=kq.subtract(c);
		count=count.add(one);
	}
	return count;
}
khoa khoa::modules(khoa c){
	khoa k1=*this,kq;
	kq=k1.subtract(c.multiply(k1.divide(c)));
	return kq;
}
main(){
	khoa k1,k2,kq;
	k1.nhap();
	k2.nhap();
	kq=k1.modules(k2); kq.hienthi();
}
