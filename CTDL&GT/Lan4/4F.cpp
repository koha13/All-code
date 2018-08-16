#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,m,a[505][505],s[505][505];
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++) cin>>a[i][j];
		for(int i=1;i<=n;i++) s[i][1]=a[i][1];
		for(int j=1;j<=m;j++) s[1][j]=a[1][j];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++){
				if(a[i][j]==1) s[i][j]=min(s[i][j-1],min(s[i-1][j],s[i-1][j-1]))+1;
				else s[i][j]=0;
			}
		int kq=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++){
				if(s[i][j]>kq) kq=s[i][j];
			}		
		cout<<kq*kq<<endl;
	}
}
