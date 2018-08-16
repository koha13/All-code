#include<bits/stdc++.h>
using namespace std;
long long fib[92];
void fibo(){
	fib[1]=1;fib[2]=1;
	for(int i=3;i<=92;i++)
		fib[i]=fib[i-1]+fib[i-2];
}
long long xuly(long long n, long long k){
	if(k==1 && n==1) return 1;
	if(k==1 && n==2) return 2;
	if(k<=fib[n-2]) return xuly(n-2,k);
	return xuly(n-1,k-fib[n-2]);
}
main(){
	fibo();
	int test;
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		long long kq=xuly(n,k);
		if(kq==1) cout<<"A";
		else cout<<"B";
		cout<<endl;
	}
}
