#include<bits/stdc++.h>
using namespace std;
string s;
void xuly(){
	stack<string> kq,dau;
	int i=0;
	while(i<s.length()){
		if(s[i]=='('){
			dau.push("(");
			i++;
		}
		else if(s[i]==')'){
			while(dau.top()!="("){
				string t=dau.top();
				kq.push(t);
				dau.pop();
				cout<<t;
			}
			dau.pop();
			i++;
		}
		else if(s[i]=='+'){
			while(!dau.empty()){
				string t=dau.top();
				kq.push(t);
				dau.pop();
				cout<<t;
			}
			dau.push("+");
			i++;
		}
		else if(s[i]=='-'){
			while(!dau.empty()){
				string t=dau.top();
				kq.push(t);
				dau.pop();
				cout<<t;
			}
			dau.push("-");
			i++;
		}
		else if(s[i]=='*'){
			while(!dau.empty() && (dau.top()=="*" || dau.top()=="/")){
				string t=dau.top();
				kq.push(t);
				dau.pop();
				cout<<t;
			}
			dau.push("*");
			i++;
		}
		else if(s[i]=='/'){
			while(!dau.empty() && (dau.top()=="*" || dau.top()=="/")){
				string t=dau.top();
				kq.push(t);
				dau.pop();
				cout<<t;
			}
			dau.push("/");
			i++;
		}
		string tmp=""; int kt=0;
		while(s[i]>='0' && s[i]<='9'){
			tmp+=s[i];
			cout<<s[i];
			kt=1;
			i++;
		}
		if(kt==1) kq.push(tmp);
	}
}
main(){
	int test;
	cin>>test;
	while(test--){
		cin>>s;
		xuly();
	}
}
