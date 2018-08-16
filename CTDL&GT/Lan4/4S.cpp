#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,k;
		cin>>n>>k;
		int a[100005];
		a[0]=1; a[1]=1;
		int tmp=1;
		for(int i=2;i<=k;i++){
			tmp+=a[i-1];
			a[i]=tmp;
		}
		for(int i=k+1;i<=n;i++){
			tmp=tmp+a[i-1]-a[i-k-1];
			a[i]=tmp;
		}
		cout<<a[n]<<endl;
	}
}
