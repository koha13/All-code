#include<bits/stdc++.h>
using namespace std;
int xuly(int dau, int cuoi, int a[],int k){	
	while(dau<=cuoi){
		int m=(dau+cuoi)/2;
		if(k==a[m]) return m;
		if(k>a[m]) dau=m+1;
		else cuoi=m-1;
	}
	return -1;
}
main(){
	int test;
	cin>>test;
	while(test--){
		int n,k,a[100001];
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		int kq=xuly(1,n,a,k);
		if(kq==-1) cout<<"NO";
		else cout<<kq;
		cout<<endl;
	}
}
