#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a[3001]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		int tmp;
		cin>>tmp;
		a[tmp]=1;
	}
	int kt=0;
	for(int i=1;i<=n;i++)
		if(a[i]==0){
			kt=1;
			cout<<i;
			break;
		}
	if(kt==0) cout<<n+1;
}

