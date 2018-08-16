#include<iostream>
#include<cmath>
using namespace std;
class CapSo{
	protected:
		int S,T,sobuoc;
		int q[9999],c[9999]={0};
		int x,dau=1,cuoi=1,i,j,tmp,p,v;
	public:
		bool ngto(int x);
		void nhap();
		int dichchuyen();
		void kietke();
};
bool CapSo::ngto(int x){
	if(x<2) return false;
	for(int i=2;i<sqrt(x);i++)
		if(x%i==0) return false;
	return true;
}
void CapSo::nhap(){
	cin>>S>>T;
}
int CapSo::dichchuyen(){
	q[cuoi]=S;
	c[S]=1;
	while(dau<=cuoi){
		x=q[dau];
		dau++;
		i=1;
		while(i<=1000){
			p=x/(i*10);
			tmp=x%i;
			for(j=0;j<=9;j++){
				v=p*i*10+i*j+tmp;
				if(v>1000 && ngto(v) && c[v]==0){
					c[v]=c[x]+1;
					if(v==T){
						cout<<c[x]<<endl;
						sobuoc=c[x];
						return 1;
					}
					cuoi++;
					q[cuoi]=v;
				}
			}
			i*=10;	
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		CapSo a;
		a.nhap();
		a.dichchuyen();		
	}

}
