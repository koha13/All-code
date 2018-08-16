#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		int k;
		priority_queue <int> p;
		cin>>k;
		cin>>s;
		int a[30]={0};
		for(int i=0;i<s.length();i++)
			a[s[i]-'A']++;
		for(int i=0;i<=29;i++) p.push(a[i]);
		if(k>s.length()) k=s.length();
		while(k--){
			int tmp=p.top();
			p.pop();
			tmp--;
			p.push(tmp);
		}
		long long kq=0;
		while(!p.empty()){
			kq+=p.top()*p.top();
			p.pop();
		}
		cout<<kq<<endl;
	}
	
}
