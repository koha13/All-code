#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stdlib.h>
using namespace std;
main(){
	long long k,n;
	cin>>n>>k;
	vector<int> v(n,0);
	for(int i=1;i<=k;i++){
		int a,b;
		cin>>a>>b;
		v[a]++;
		v[b+1]--;
	}
	for(int i=1;i<v.size();i++)
		v[i]=v[i]+v[i-1];
	sort(v.begin(),v.end());
	cout<<v[(n-1)/2];
}
