#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	int kt=1,i=s.length()-1;
	string kq="";
	for(int i=0;i<s.length();i++)
		if(kt==0) kq+=s[i];
		else{
			if(s[i]=='1') kq+=s[i];
			else{
				kt=0;
			}
		}
	if(kt==1){
		for(int i=0;i<s.length()-1;i++) cout<<s[i];
	}
	else cout<<kq;
}

