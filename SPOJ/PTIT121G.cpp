#include<bits/stdc++.h>
using namespace std;
int n,a[105][105],vs[105];
void dfs(int u){
	vs[u]=1;
	for(int i=1;i<=n;i++)
		if(vs[i]==0 && a[u][i]==0) dfs(i);
}
main(){
	while(1){
		cin>>n;
		if(n==0) break;
		int dem=0;
		for(int i=1;i<=105;i++) vs[i]=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++) cin>>a[i][j];
		for(int i=1;i<=n;i++){
			if(vs[i]==0){
				dem++;
				dfs(i);
			}
		}
		if(dem==2) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
