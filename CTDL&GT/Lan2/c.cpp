#include<bits/stdc++.h>
using namespace std;
long long q=123456789;
long long power(long long a,long long k){
	if(k==1) return a;
	long long tmp=power(a,k/2);
	long long kq=tmp*tmp%q;
	if(k%2==1) kq=kq*a%q;
	return kq;
}
main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		long long kq=power(2,n-1);
		cout<<kq<<endl;
	}
}

