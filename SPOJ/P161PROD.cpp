#include<bits/stdc++.h>
using namespace std;
string c;
void xuly(string s,int i){
	if(c=="L"){
		if(i==9) cout<<s[0];
		else cout<<s[i+1];
	}
	if(c=="R"){
		if(i==0) cout<<s[9];
		else cout<<s[i-1];
	}
}
main(){
	string s1="qwertyuiop",s2="asdfghjkl;",s3="zxcvbnm,./";
	string s;
	cin>>c>>s;
	for(int i=0;i<s.length();i++){
		for(int j=0;j<=9;j++)
			if(s[i]==s1[j]) xuly(s1,j);
		for(int j=0;j<=9;j++)
			if(s[i]==s2[j]) xuly(s2,j);
		for(int j=0;j<=9;j++)
			if(s[i]==s3[j]) xuly(s3,j);
	}
}

