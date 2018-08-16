#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,t,dem=0;
		queue<int> q;
		cin>>n>>t;
		for(int i=1;i<=n;i++){
			int tmp;
			cin>>tmp;
			q.push(tmp);
		}
		while(!q.empty() && t>q.front()){
				t-=q.front();
				q.pop();
				dem++;
		}
		cout<<dem<<endl;
	}
}
