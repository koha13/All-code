#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	string s;
	stack<int> khoa;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(khoa.empty()) khoa.push(s[i]-48);
		else{
			while(!khoa.empty() && s[i]-48>khoa.top() && k>0){
				khoa.pop();
				k--;
			}
			khoa.push(s[i]-48);
		}
	}
	while(k>0 && !khoa.empty()) khoa.pop();
	vector<int> v;
	while(!khoa.empty()){
		v.push_back(khoa.top());
		khoa.pop();
	}
	for(int i=v.size()-1;i>=0;i--) cout<<v[i];
}

