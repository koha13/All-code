#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	while(s.length()%3!=0) s="0"+s;
	for(int i=0;i<s.length();i=i+3){
		string tmp="";
		for(int j=i;j<i+3;j++)
			tmp+=s[j];
		if(tmp=="000") cout<<"0";
		if(tmp=="001") cout<<"1";
		if(tmp=="010") cout<<"2";
		if(tmp=="011") cout<<"3";
		if(tmp=="100") cout<<"4";
		if(tmp=="101") cout<<"5";
		if(tmp=="110") cout<<"6";
		if(tmp=="111") cout<<"7";
	}
}

