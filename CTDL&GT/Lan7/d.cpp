#include<bits/stdc++.h>
using namespace std;
struct edge{
	int u,v,w;
};
bool cmp(edge a, edge b) {
    return a.w < b.w;
}
int cha[200005], hang[200005];
int find(int u) {
    if (cha[u] != u) cha[u] = find(cha[u]);
    return cha[u];
}
bool join(int u, int v) {
    u = find(u); v = find(v);
    if (u == v) return false;
    if (hang[u] < hang[v]){
    	cha[u] = v;
    	hang[v]+=hang[u];
	}
    else{
    	cha[v]=u;
    	hang[u]+=hang[v];
    }
    return true;
}
void KRUSKAL(){
	vector<edge> e;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		edge tmp;
		cin>>tmp.u>>tmp.v>>tmp.w;
		e.push_back(tmp);
	}			
	sort(e.begin(),e.end(),cmp);
	for(int i=1;i<=n;i++){
		cha[i]=i;
		hang[i]=0;
	}
	long long kq=0;
	for(int i=0;i<e.size();i++){
		if(join(e[i].u,e[i].v)){
			kq+=e[i].w;
		}
	}
	cout<<kq<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		KRUSKAL();
	}
}
