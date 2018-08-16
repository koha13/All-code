#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	while(s.length()%3!=0) s="0"+s;
	for(int i=0;i<s.length();i=i+3){
		string t="";
		for(int j=i;j<i+3;j++){
			t=t+s[j];
			if(t=="000") cout<<"0";
			if(t=="001") cout<<"1";
			if(t=="010") cout<<"2";
			if(t=="011") cout<<"3";
			if(t=="100") cout<<"4";
			if(t=="101") cout<<"5";
			if(t=="110") cout<<"6";
			if(t=="111") cout<<"7";
		}
	}
}
