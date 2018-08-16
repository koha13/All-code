#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		float n;
		cin>>n;
		float kt=2.0/(1.0-n/180);
		int ep=kt;
		if(ep*10000==kt*10000) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

