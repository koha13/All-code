#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000007;
long long power(long long n, long long k){
	if(k==1) return n;
	long long tmp=power(n,k/2);
	long long kq=tmp*tmp%MOD;
	if(k%2==1) kq=kq*n%MOD;
	return kq;
}
main(){
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		cout<<power(n,k)<<endl;
	}
}
