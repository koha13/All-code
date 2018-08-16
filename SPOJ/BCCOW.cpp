#include<bits/stdc++.h>
using namespace std;
int x[21],n,c,a[21],fopt=0;
void kiemtra(){
	int kq=0;
	for(int i=1;i<=n;i++)
		kq+=x[i]*a[i];
	if(kq<=c && kq>fopt) fopt=kq;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			kiemtra();
		}
		else Try(i+1);
	}
}
main(){
	cin>>c>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) x[i]=0;
	Try(1);
	cout<<fopt;
}
