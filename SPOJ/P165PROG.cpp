#include<bits/stdc++.h>
using namespace std;
main(){
	string s,b,i,sh,l,big;
	cin>>s;
	b="127";
	i="2147483647";
	sh="32767";
	l="9223372036854775808";
	if(s[0]=='-'){
		for(int i=0;i<s.length();i++)
			s[i]=s[i+1];
		s[s.length()-1]='\0';
	}
	if(s.compare(b)<0) cout<<"byte";
	else if(s.compare(sh)<0) cout<<"short";
	else if(s.compare(i)<0) cout<<"int";
	else if(s.compare(l)<0) cout<<"long";
	else cout<<"Biginteger";
}
