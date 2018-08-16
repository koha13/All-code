#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int dem;
string s1,s2;
int Try(int i,int tmp){
	if(i==s1.length()) return 0;
	if(s1[i]=='?') return (9-s2[i]+'0')*pow(10,tmp-1)+Try(i+1,tmp-1);
	else if(s1[i]>s2[i]) return pow(10,tmp);
	else if(s1[i]<s2[i]) return 0;
	return Try(i+1,tmp);
}
main(){
	while(1){
		cin>>s1;
		if(s1=="#") break;
		cin>>s2;
		dem=0;
		for(int i=0;i<s1.length();i++) if(s1[i]=='?') dem++;
		cout<<Try(0,dem)<<endl;
	}
}

