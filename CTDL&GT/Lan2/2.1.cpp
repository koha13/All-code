#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
long long power(long long n, long long k){
	if(k==1) return n;
	long long tmp=power(n,k/2);
	long long kq=tmp*tmp%MOD;
	if(k%2==1) kq=kq*n%MOD;
	return kq;
}
main(){
	long long n,k;
	cin>>n>>k;
	cout<<power(n,k);
}
