#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		char s[15];
		for(int i=1;i<=n;i++)
		{
			itoa(i,s,2);
			cout<<s<<" ";
		}
		cout<<endl;
	}
}
