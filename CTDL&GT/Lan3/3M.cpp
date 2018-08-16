#include<bits/stdc++.h>
using namespace std;
bool xuly(string s){
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{')
			st.push(s[i]);
		else{
			if(st.empty()) return false;
			if(s[i]==')'){
				if(st.top()!='(') return false;
				else{
					st.pop();
				}
			}
			if(s[i]==']'){
				if(st.top()!='[') return false;
				else{
					st.pop();
				}
			}
			if(s[i]=='}'){
				if(st.top()!='{') return false;
				else{
					st.pop();
				}
			}
		}
	}
	return true;
}
main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		if(xuly(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
