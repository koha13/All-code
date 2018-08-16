#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n, a[100005], b[100005];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		stack<int > s;
		s.push(0);
		for(int i=1;i<n;i++){
			int next=i;
			if(!s.empty()){
				int element=s.top();
				s.pop();
				while(a[next]>a[element]){
					b[element]=a[next];
					if(s.empty()) break;
					element=s.top();
					s.pop();
				}
				if(a[element]>=a[next]) s.push(element);
			}
			s.push(next);
		}
		while(!s.empty()){
			b[s.top()]=-1;
			s.pop();
		}
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}
