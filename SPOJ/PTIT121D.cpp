#include<bits/stdc++.h>
using namespace std;
int Try(long long l,long long n,long long k){
	long long tmp=(l-(1+k+2))/2;
	if(n<=l-tmp){
		if(n==tmp+1){
			cout<<"m";
			return 0;
		}
		else{
			cout<<"o";
			return 0;
		}
	}
	else Try(tmp,n-tmp-(1+k+2),k-1);
}
main(){
	long long n,k=0,l=3;
	cin>>n;
	while(l<n){
		k++;
		l=l*2+1+k+2;
	}
	Try(l,n,k);
}

