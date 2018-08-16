#include<bits/stdc++.h>
using namespace std;
struct canh{
	int u,v;
};
int cha[1001],hang[1001];
int find(int u){
	if(cha[u]!=u) cha[u]=find(cha[u]);
	return cha[u];
}
int join(int u,int v){
	u=find(u);
	v=find(v);
	if(u==v) return 1;
	if(u>v){
		hang[u]++;
		cha[v]=u;
	}
	else{
		hang[v]++;
		cha[u]=v;
	}
	return 1;
}
main(){
	int test;
	cin>>test;
	canh a[1001];
	while(test--){
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=m;i++)
			cin>>a[i].u>>a[i].v;
		for(int i=1;i<=n;i++){
			cha[i]=i;
			hang[i]=1;
		}
		for(int i=1;i<=m;i++)
			join(a[i].u,a[i].v);
		int q;
		cin>>q;
		while(q--){
			int u,v;
			cin>>u>>v;
			if(find(u)==find(v)) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}
	}
}
