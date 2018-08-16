#include<bits/stdc++.h>
using namespace std;
struct vitri{
	int x,y;
};
bool chan[101][101][101][101];
int kt(int x,int y,int n){
	if(x<1 || y<1 || x>n || y>n) return 0;
	return 1;
}
main(){
	memset(chan,false,sizeof(chan));
	int n,k,m;
	cin>>n>>k>>m;
	for(int i=1;i<=m;i++){
		int u,v,x,y;
		cin>>u>>v>>x>>y;
		chan[u][v][x][y]=chan[x][y][u][v]=true;
	}
	int matrix[101][101];
	memset(matrix,0,sizeof(matrix));
	int dx[]={0,0,1,-1};
	int dy[]={1,-1,0,0};
	queue<vitri> q;
	vitri dau;
	int ok=0,dem=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			if(matrix[i][j]==0){
				ok++;
				matrix[i][j]=ok;
				dau.x=i;
				dau.y=j;
				queue<vitri> q;
				q.push(dau);
				while(!q.empty()){
					vitri top=q.front();
					q.pop();
					for(int k=0;k<4;k++)
						if(kt(top.x+dx[k],top.y+dy[k],n) && matrix[top.x+dx[k]][top.y+dy[k]]==0 && !chan[top.x][top.y][top.x+dx[k]][top.y+dy[k]]){
							matrix[top.x+dx[k]][top.y+dy[k]]=ok;
							vitri tmp;
							tmp.x=top.x+dx[k];
							tmp.y=top.y+dy[k];
							q.push(tmp);
						}
				}
			}
		}
	int re[100010]={0}, result=0;
	for(int i=1;i<=k;i++){
		int u,v;
		cin>>u>>v;
		re[matrix[u][v]]++;
		dem++;
	}
	for(int i=1;i<=dem;i++)
		for(int j=i+1;j<=dem;j++) result+=re[i]*re[j];
	cout<<result;
}
