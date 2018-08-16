#include<bits/stdc++.h>
using namespace std;
long long power(long long a,long long k){
	if(k==0) return 1;
	if(k==1) return a;
	long long tmp=power(a,k/2);
	long long kq=tmp*tmp;
	if(k%2==1) kq=kq*a;
	return kq;
}
long long xuly(long long n,long long k){
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
		long long kq=xuly(n,k);
		cout<<kq<<endl;
	}
}

