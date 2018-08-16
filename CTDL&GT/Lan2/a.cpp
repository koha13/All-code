#include<bits/stdc++.h>
using namespace std;
long long a;
long long powmo(long long n,long long k){
	if(k==1) return n;
	long long kt=powmo(n,k/2);
	long long kq=kt*kt%a;
	if(k%2==1) kq=kq*n%a;
	return kq;
}
main(){
	long long n,k;
	a=1000000007;
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		long long kq=powmo(n,k);
		cout<<kq<<endl;
	}
	
}

