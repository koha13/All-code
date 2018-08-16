#include<bits/stdc++.h>
using namespace std;
main(){
	string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	int k;
	string s;
	while(1){
		cin>>k;
		if(k==0) break;
		cin>>s;
		for(int i=s.length()-1;i>=0;i--){
			for(int j=0;j<=27;j++){
				if(s[i]==a[j]){
					int tmp=j+k;
					if(tmp<28) cout<<a[tmp];
					else cout<<a[tmp-28];
				}
			}
		}
		cout<<endl;
	}
}
