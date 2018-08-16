#include<bits/stdc++.h>
using namespace std;
int n;
int bs(int a[],int k,int l,int r){
	if(r>=l){
		int m;
		m=l+(r-l)/2;
		if(a[m]<=k){
			if(a[m+1]>k || m==n) return m;
			else return bs(a,k,m+1,r);
		}
		else return bs(a,k,l,m-1);
	}
	return -1;
}
main(){
	cin>>n;
	int a[100001];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--){
		int k;
		cin>>k;
		int kq=bs(a,k,1,n);
		if(kq==-1) cout<<"0\n";
		else cout<<kq<<endl;
	}
	
}

