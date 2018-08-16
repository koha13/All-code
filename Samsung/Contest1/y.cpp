#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a[1001];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int f[1001],kq=1;
	for(int i=1;i<=n;i++){
		f[i]=0;
		for(int j=i-1;j>=1;j--)
			if(a[j]<a[i]){
				f[i]=max(f[i],f[j]);
			}
		f[i]++;
		if(kq<f[i]) kq=f[i];
	}
	cout<<kq;
}
