#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,a[100005];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		stack<int> s;
		int i=0,max=0;
		while(i<n){
			if(s.empty() || a[s.top()] <= a[i]){
				s.push(i);
				i++;			
			}

			else{
				int tp=s.top();
				s.pop();
				int tmp=a[tp]*(s.empty()?i:i-s.top()-1);
				if(tmp>max) max=tmp;
			}
		}
		while(!s.empty()){
			int tp=s.top();
			s.pop();
			int tmp=a[tp]*(s.empty()?i:i-s.top()-1);
			if(tmp>max) max=tmp;			
		}
		cout<<max<<endl;
	}
}
