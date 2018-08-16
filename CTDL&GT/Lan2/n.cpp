#include<bits/stdc++.h>
using namespace std;
int n,a[11],b[11],smin=9999999;
int x[11];
void xuly(){
	int  chua=1,cay=0,kt=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1) {
			chua*=a[i];
			cay+=b[i];
			kt=1;
		}
	}
	if(kt==1)
		if(abs(chua-cay)<smin) smin=abs(chua-cay);
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			xuly();
		}
		else Try(i+1);
	}
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	Try(1);
	cout<<smin;
}

