#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	int d=0,m=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			if(d<0){
				d=-d;
				m+=d/2;
				if(d%2){
					d=2;
					m++;
				}
				else d=1;
			}
			else d++;
		}
		else d--;
	}
	if(d<0) d=-d;
	if(d%2) d++;
	m+=d/2;
	cout<<m;
}

