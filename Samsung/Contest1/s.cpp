#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	while(cin>>s){
		stack<int> st;
		int dem=1;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				cout<<dem<<" ";
				st.push(dem);
				dem++;
			}
			if(s[i]==')'){
				cout<<st.top()<<" ";
				st.pop();
			}
		}
		cout<<endl;
	}
}
