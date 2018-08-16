#include<bits/stdc++.h>
using namespace std;
main(){
	int test,a;
	char s[100],t[5];
	cin>>test;
	for(int i=1;i<=test;i++){
		cin>>a>>s; gets(t);
		int l=strlen(s);
		cout<<a<<" ";
		if(next_permutation(s,s+l))
			for(int i=0;i<l;i++) cout<<s[i];
		else cout<<"BIGGEST";
		cout<<endl;
	}
}

