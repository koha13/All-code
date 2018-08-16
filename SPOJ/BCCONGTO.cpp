#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	while(1){
		long long kq=0;
		cin>>s;
		if(s=="0") break;
		for(int i=0;i<s.length();i++){
			int tmp=s[i]-48;
			if(tmp>4) tmp--;
			kq=kq*9+tmp;
		}
		cout<<s<<": "<<kq<<endl;
	}
}

