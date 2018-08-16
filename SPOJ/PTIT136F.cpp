#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	int dem=0,kq=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='L') kq--;
		if(s[i]=='R') kq++;
		if(s[i]=='?') dem++;
	}
	if(kq<0) kq=kq-dem;
	else kq=kq+dem;
	cout<<kq<<endl;
}

