#include<bits/stdc++.h>
using namespace std;
long long power(int n,int k){
	if(k==0) return 1;
	if(k==1) return n;
	long long kt=power(n,k/2);
	long long kq=kt*kt;
	if(k%2==1) kq=kq*n;
	return kq;
}
main(){
	int k;
	string a,b;
	cin>>k>>a>>b;
	long long tmp1=0,tmp2=0;
	for(int i=a.length()-1;i>=0;i--){
		tmp1+=(long long)(a[i]-48)*power(k,a.length()-1-i);
	}
	for(int i=b.length()-1;i>=0;i--){
		tmp2+=(long long)(b[i]-48)*power(k,b.length()-1-i);
	}
	long long kq=tmp1+tmp2;
	char s[1000];
	itoa(kq,s,k);
	cout<<s;
}

