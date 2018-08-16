#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n, a[100005],b[100005];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		} 
		sort(a,a+n);
		int l,r;
		for(l=0;l<n;l++)
			if(a[l]!=b[l]){
				break;
			}
		if(l==n){
			cout<<"YES\n";
			continue;
		}
		for(r=n-1;r>=0;r--)
			if(a[r]!=b[r])
				break;
		cout<<r-l+1<<endl;
	}
}
