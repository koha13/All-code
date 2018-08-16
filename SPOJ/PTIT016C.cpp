#include<bits/stdc++.h>
using namespace std;
string s;
bool kiemtra(){
	for(int i=0;i<s.length();i++){
		if(i%2==0) if((s[i]-48)%2==0) return false;
		if(i%2!=0) if((s[i]-48)%2!=0) return false;
	}
	return true;
}
main(){
	int test;
	cin>>test;
	string t;
	getline(cin,t);
	while(test--){
		getline(cin,s);
		if(kiemtra()) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

