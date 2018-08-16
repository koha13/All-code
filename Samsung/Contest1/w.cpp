#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		long long n,a[100005];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		stack<long long> s;
		long long i=0; long long max=0;
		while(i<n){
			if(s.empty() || a[s.top()] <= a[i]){
				s.push(i);
				i++;			
			}

			else{
				long long tp=s.top();
				s.pop();
				long long tmp=a[tp]*(s.empty()?i:i-s.top()-1);
				if(tmp>max) max=tmp;
			}
		}
		while(!s.empty()){
			long long tp=s.top();
			s.pop();
			long long tmp=a[tp]*(s.empty()?i:i-s.top()-1);
			if(tmp>max) max=tmp;			
		}
		cout<<max<<endl;
	}
}
