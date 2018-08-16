#include<bits/stdc++.h>
using namespace std;
int dolon(char a){
	if(a=='(') return 0;
	if(a=='+' || a=='-') return 1;
	else if(a=='*' || a=='/') return 2;
	else return 3;
}
main(){
	string t;
	while(cin>>t){
		stack<char> s;
		for(int i=0;i<t.length();i++){
			if(t[i]=='(') s.push(t[i]);
			else if(t[i]==')'){
				while(s.top()!='('){
					cout<<s.top();
					s.pop();
				}
				s.pop();
			}
			else if(t[i]<='z' && t[i]>='a') cout<<t[i];
			else{
				while(!s.empty() && dolon(t[i])<=dolon(s.top())){
					cout<<s.top();
					s.pop();
				}
				s.push(t[i]);
			}
		}
		while(!s.empty()){
			cout<<s.top();
			s.pop();
		}
		cout<<endl;
	}
}
