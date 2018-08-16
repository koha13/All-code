#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int mt[11]={0};
		string a,b,c;
		cin>>a>>b>>c;
		for(int i=0;i<a.length();i++){
			mt[a[i]-48]++;
		}
		for(int i=0;i<b.length();i++){
			mt[b[i]-48]++;
		}
		for(int i=0;i<c.length();i++){
			mt[c[i]-48]++;
		}
		int i=9;
		while(i>=0){
			while(mt[i]>0){
				mt[i]--;
				cout<<i;
			}
			i--;
		}
		cout<<endl;
	}
}
