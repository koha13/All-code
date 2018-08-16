#include<bits/stdc++.h>
using namespace std;
int cha[100005], hang[100005];
int find(int u) {
    if (cha[u] != u) cha[u] = find(cha[u]);
    return cha[u];
}
void join(int u, int v) {
    u = find(u); v = find(v);
    if (u == v) return;
    if (hang[u] >= hang[v]){
    	hang[u]+=hang[v];
    	cha[v]=u;
	}
    else{
    	hang[v]+=hang[u];
    	cha[u]=v;
	}
    return;
}
main(){
	int t;
	cin>>t;
	while(t--){

		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cha[i]=i;
			hang[i]=1;
		}
		int u,v;
		for(int i=1;i<=m;i++){
			cin>>u>>v;
			join(u,v);
		}
		int ma=0;
		for(int i=1;i<=n;i++) if(hang[i]>ma) ma=hang[i];
		cout<<ma<<endl;
	}
}
