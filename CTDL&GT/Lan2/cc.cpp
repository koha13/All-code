#include<bits/stdc++.h>
using namespace std;
string s;
long long n,l;
long long xuly(long long tmp,long long n){
	if(n<=l) return n;
	if(n>tmp/2){
		if(n==tmp/2+1) return xuly(tmp/2,n-1);
		else return xuly(tmp/2,n-tmp/2-1);
	}
	return xuly(tmp/2,n);
}
main(){
	cin>>s>>n;
	s="0"+s;
	l=s.length()-1;
	long long tmp=l;
	while(tmp<n){
		tmp*=2;
	}
	long long kq=xuly(tmp,n);
	cout<<s[kq];
}

