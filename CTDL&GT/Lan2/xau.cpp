#include<bits/stdc++.h>
using namespace std;
long long fibo[95];
void fiboo(){
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=92;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
long long xuly(long long n,long long k){
	if(n==1) return 1;
	if(n==2) return 2;
	if(k<=fibo[n-2]) return xuly(n-2,k);
	if(k>fibo[n-2]) return xuly(n-1,k-fibo[n-2]);
}
main(){
	int test;
	fiboo();
	cin>>test;
	while(test--){
		long long n,k;
		cin>>n>>k;
		long long kq=xuly(n,k);
		if(kq==1) cout<<"A\n";
		if(kq==2) cout<<"B\n";
	}
}

