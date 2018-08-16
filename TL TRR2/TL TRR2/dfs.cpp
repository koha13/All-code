#include<bits/stdc++.h>
using namespace std;
int n,a[120][20],vs[100]={0},pr[100];
void dfs(int u){
	cout<<u<<" ";
	vs[u]=1;
	for(int v=1;v<=n;v++){
		if(vs[v]==0 && a[u][v]==1){
			pr[v]=u;
			dfs(v);
		} 
	}
}
main(){
	ifstream f("matran.dat");
	f>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) f>>a[i][j];
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
	dfs(1);
	pr[1]=0;
	cout<<endl;
	int i=7; cout<<7<<" ";
	while(pr[i]!=0){
		cout<<pr[i]<<" ";
		i=pr[i];
	}
}
