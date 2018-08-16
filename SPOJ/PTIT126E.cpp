#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	while(1){
		getline(cin,s);
		if(s=="#") break;
		int l=s.length();
		int y=0,n=0,a=0,p=0;
		for(int i=0;i<l;i++){
			if(s[i]=='Y') y++;
			else if(s[i]=='N') n++;
			else if(s[i]=='P') p++;
			else a++;
		}
		int kt;
		if(l%2==0) kt=l/2;
		else kt=l/2+1;
		if(a>=kt) cout<<"need quorum\n";
		else if(y>n) cout<<"yes\n";
		else if(y<n) cout<<"no\n";
		else if(y==n) cout<<"tie\n";
	}
}

