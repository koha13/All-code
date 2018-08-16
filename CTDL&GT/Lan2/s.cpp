#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int k,int l,int r){
	if(r>=l){
		int m;
		m=l+(r-l)/2;
		if(k==a[m]) return m;
		if(k>a[m]) return bs(a,k,m+1,r);
		else return bs(a,k,l,m-1);
	}
	return -1;
}
main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[100001];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int kq=bs(a,k,1,n);
		if(kq==-1) cout<<"NO\n";
		else cout<<kq<<endl;
	}
}

