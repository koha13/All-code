#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
main(){
	char s[100];
	stack<int> a;
	gets(s);
	int l=strlen(s);
	for(int i=0;i<l;i++){
		if(s[i]=='C') a.push(12);
		if(s[i]=='H') a.push(1);
		if(s[i]=='O') a.push(16);
		if(s[i]=='(') a.push(0);
		if(s[i]==')'){
			int tam=0;
			while(a.top()!=0 && !a.empty()){
				tam+=a.top();
				a.pop();
			}
			if(!a.empty() && a.top()==0){
				a.pop();
				a.push(tam);
			}
		}
		if(s[i]>'0' && s[i]<='9'){
			int tam=a.top();
			a.pop();
			a.push(tam*(s[i]-'0'));
		}
	}
	int kq=0;
	while(!a.empty()){
		kq+=a.top();
		a.pop();
	}
	cout<<kq;
}
