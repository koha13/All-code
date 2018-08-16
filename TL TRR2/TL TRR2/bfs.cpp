#include<bits/stdc++.h>
using namespace std;
int n,a[120][20],vs[100]={0},pr[100];;
queue<int> q;
void bfs(int u){
	q.push(u); vs[u]=1;
	while(!q.empty()){
		int v=q.front(); q.pop();
		cout<<v<<" ";
		for(int i=1;i<=n;i++)
			if(vs[i]==0 && a[v][i]==1){
				pr[i]=v;
				vs[i]=1;
				q.push(i);
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
	bfs(1);
	cout<<endl;
	pr[1]=0;
	int i=7;
	while(pr[i]!=0){
		cout<<pr[i]<<" ";
		i=pr[i];
	}
}
