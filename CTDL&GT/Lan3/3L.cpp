#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		stack<int> st;
		st.push(-1);
		int kq=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='(') st.push(i);
			else{
				st.pop();
				if(!st.empty()) kq=max(kq,i-st.top());
				else st.push(i);
			}
		}
		cout<<kq<<endl;
	}
}
