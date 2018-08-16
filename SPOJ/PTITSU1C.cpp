#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,m,a[105];
		int fopt=-99999;
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<n;j++)
				for(int k=j+1;k<=n;k++){
					int kq=a[i]+a[j]+a[k];
					if(kq>fopt && kq<=m) fopt=kq;
				}
		cout<<fopt<<endl;		
	}
}
