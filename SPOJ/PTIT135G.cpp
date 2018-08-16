#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,a[101],max=0,kq;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n-2;i++)
		for(int j=i+1;j<=n-1;j++)
			for(int k=j+1;k<=n;k++)
			{
				kq=a[i]+a[j]+a[k];
				if(kq>max && kq<=m) max=kq;
			}
	cout<<max;
}

