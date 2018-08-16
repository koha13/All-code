#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	string t;
	getline(cin,t);
	while(test--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			int d=0;
			int j=i;
			while(s[j]==s[i]){
				j++;
				d++;
			}
			cout<<d<<s[i];
			i=i+d-1;
		}
		cout<<endl;
	}
}

