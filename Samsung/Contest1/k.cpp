#include<bits/stdc++.h>
using namespace std;
long long power(long long n, long long k){
	if(k==0) return 1;
	if(k==1) return n;
	long long tmp=power(n,k/2);
	long long kq=tmp*tmp;
	if(k%2==1) kq=kq*n;
	return kq;
}
long long xuly(long long n, long long k){
	long long tmp=power(2,n-1);
	if(k==tmp) return n;
	if(k>tmp) return xuly(n-1,k-tmp);
	return xuly(n-1,tmp-k);
}
main(){
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		cout<<xuly(n,k)<<endl;
	}
}
