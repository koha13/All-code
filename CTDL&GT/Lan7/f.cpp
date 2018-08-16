#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int d[1005][1005],n,m;
void FLOYD(){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			d[i][j]=a[i][j];
		}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(d[i][j]> d[i][k] + d[k][j]){
					d[i][j]= d[i][k] + d[k][j];
				}
	}
}
main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++){
			if(i==j){
				a[i][j]=a[j][i]=0;
			}
			else a[i][j]=a[j][i]=999999999;
		}
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		a[u][v]=a[v][u]=w;
	}
	FLOYD();
	int q;
	cin>>q;
	while(q--){
		int u,v;
		cin>>u>>v;
		cout<<d[u][v]<<endl;
	}
}
