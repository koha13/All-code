#include<bits/stdc++.h>
using namespace std;

int a[105][105],vs[105]={0},n,u;
void DFS(int u){
	cout<<u<<" ";
	vs[u]=1;
	for(int i=1;i<=n;i++)
		if(vs[i]==0 && a[u][i]==1) DFS(i);
}
void BFS(int u){
	queue<int> q;
	q.push(u); vs[u]=1;
	while(!q.empty()){
		int v=q.front(); q.pop();
		cout<<v<<" ";
		for(int i=1;i<=n;i++)
			if(vs[i]==0 && a[v][i]==1){
				vs[i]=1;
				q.push(i);
			}
	}
}
int TPLT_DFS(int a[][105]){
	int kq=0;
	for(int i=1;i<=n;i++) vs[i]=0;
	for(int i=1;i<=n;i++)
		if(vs[i]==0){
			kq++;
			DFS(i);
		}
	return kq;
}
int TPLT_BFS(int a[][105]){
	int kq=0;
	for(int i=1;i<=n;i++) vs[i]=0;
	for(int i=1;i<=n;i++)
		if(vs[i]==0){
			kq++;
			BFS(i);
		}
	return kq;
}
void T_DFS(){
	int c[105], b[105],kt=1,ok;
	int dem=0;
	int s[105],top=1;
	s[top]=3; vs[3]=1;
	while(top>0){
		int v=s[top];
		for (int i= 1; i<=n; i++){
			ok=1;
			if (vs[i]==0 && a[v][i]==1){
				top++;
				s[top] = i;
				vs[i] = 1;
				ok = 0;
				dem++;
				c[dem]=v; b[dem]=i;
				break;
			}
		}
		if(ok) top--;
		if(dem==n-1){
			for(int i=1;i<=dem;i++){
			if(c[i]>b[i]) cout<<"("<<b[i]<<" "<<c[i]<<")"<<endl;
			else cout<<"("<<c[i]<<" "<<b[i]<<")"<<endl;
			}
			return;
		}
	}
	cout<<"Khong co cay khung.";
}
void T_BFS(){
	int b[105],c[105],dem=0;
	queue<int> q;
	q.push(1); vs[1]=1;
	while(!q.empty()){
		int v=q.front(); q.pop();
		for(int i=1;i<=n;i++)
			if(vs[i]==0 && a[v][i]==1){
				vs[i]=1;
				dem++;
				b[dem]=v;
				c[dem]=i;
				q.push(i);
			}
		if(dem==n-1){
			for(int i=1;i<=dem;i++){
			if(c[i]>b[i]) cout<<"("<<b[i]<<" "<<c[i]<<")"<<endl;
			else cout<<"("<<c[i]<<" "<<b[i]<<")"<<endl;
			}
			return;
		}		
	}
	cout<<"Khong co cay khung.";
}
void EULER(){
	int st[100*100], i, j, k, h, t,ce[105];
	t= 1; st[t]= 1; k= 0;
	while (t> 0){
		h= st[t]; j= 0;
		for (i= 1; i<= n; i++)
        	if (a[h][i] ==1){
				t++; st[t]= i; j= i; 
             	a[h][i]= 0; a[i][h]= 0;
				break;
			}
		if (j==0){
			k++;
			ce[k]= h;
			t--;
		}
    }
	for (i= k; i>=1; i--)
    	cout << ce[i] << " ";

}
void DIJKSTRA(int u){
	int d[105],p[105];
	for(int i=1;i<=n;i++){
		d[i]=a[u][i];
		vs[i]=0;
		p[i]=u;
	}
	d[u]=0; p[u]=0; vs[u]=1;
	int k=n-1;
	while(k--){
		int min,minat;
		for(int i=1;i<=n;i++)
			if(vs[i]==0){
				min=d[i];
				minat=i;
				break;
			}
		for(int i=1;i<=n;i++)
			if(min>d[i] && vs[i]==0){
				min=d[i];
				minat=i;
			}
		vs[minat]=1;
		for(int i=1;i<=n;i++)
			if(vs[i]==0 && d[i]>d[minat]+a[minat][i]){
				p[i]=minat;
				d[i]=d[minat]+a[minat][i];
			}
	}
	for(int i=1;i<=n;i++) cout<<d[i]<<" ";
}
void FLOYD(){
	int d[105][105],p[105][105];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			d[i][j]=a[i][j];
			p[i][j]=i;
		}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(d[i][j]> d[i][k] + d[k][j]){
					p[i][j]= k;
					d[i][j]= d[i][k] + d[k][j];
				}
	}
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++){
//			if(i==j){
//				continue;
//			}
//			int b[105],dem=0;
//			int k=j;
//			while(p[i][k]!=i){
//				dem++; b[dem]=p[i][k]; k=p[i][k];
//			}
//			cout<<"Duong di ngan nhat tu "<<i<<" den "<<j<<" la: ";
//			cout<<i<<" ";
//			for(int t=dem;t>=1;t--) cout<<b[dem]<<" ";
//			cout<<j<<"\nChi phi: "<<d[i][j]<<endl;
//		}
}
void PRIM(int u){
	int vt[100], d[100], t[100];
	for(int i=1;i<=n;i++){
		vt[i]=0; d[i]=a[u][i]; t[i]=u;
	}
	vt[u]=1; d[u]=0; t[u]=0;
	int wt=0;
	int m=1;
	while(m<n){
		int v=0, min=99999;
		for(int i=1;i<=n;i++)
			if(vt[i]==0 && d[i]<min){
				min=d[i];
				v=i;
			}
		if(v==0){
			cout<<"Khong co cay khung."; return;
		}
		vt[v]= 1; wt= wt + a[v][t[v]];
		for(int i=1;i<=n;i++)
			if(vt[i]==0 && d[i]>a[v][i]){
				d[i]= a[v][i]; t[i]= v;
			}
		m++;
	}
	cout << wt << endl;
	for (int i= 1; i<= n; i++)
		if (t[i] !=0) cout << i << " " << t[i] << endl;

}
// KRUSKAL bat dau tu day.
struct edge{
	int u,v,w;
};
bool cmp(edge a, edge b) {
    return a.w < b.w;
}
int cha[105], hang[105];
int find(int u) {
    if (cha[u] != u) cha[u] = find(cha[u]);
    return cha[u];
}
bool join(int u, int v) {
    u = find(u); v = find(v);
    if (u == v) return false;
    if (hang[u] == hang[v]) hang[u]++;
    if (hang[u] < hang[v]) cha[u] = v;
    else cha[v]=u;
    return true;
}
void KRUSKAL(){
	vector<edge> e;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=0){
				edge tmp;
				tmp.u=i; tmp.v=j; tmp.w=a[i][j];
				e.push_back(tmp);
			}
	sort(e.begin(),e.end(),cmp);
	for(int i=1;i<=n;i++){
		cha[i]=i;
		hang[i]=0;
	}
	int kq=0;
	for(int i=0;i<e.size();i++){
		if(join(e[i].u,e[i].v)){
			cout<<e[i].u<<" "<<e[i].v<<endl;
			kq+=e[i].w;
		}
	}
	cout<<kq;
}
main(){
	ifstream f("matran.dat");
	f>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) f>>a[i][j];
	DIJKSTRA(1);
}
