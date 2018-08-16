#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define fi first
#define se second
#define nmax 1000001
using namespace std;
int n, m, k;
typedef pair<int,int> ii;
ii S[102];
int a[102][102];
int lt[102][102];
bool r[101][101][101][101];
int x[4] = {1,-1,0,0};
int y[4] = {0,0,1,-1};
void loang(int i,int j,int d){
	lt[i][j]=d;
	for(int e = 0; e < 4;e ++){
		int u = i+x[e];
		int v = j+y[e];
		if(u >= 1&&u <= n&&v >= 1&& v <= n && !r[i][j][u][v] && lt[u][v] ==0) loang(u,v,d);
	}
}
main(){
	memset(lt,0,sizeof(lt));
	memset(r,false,sizeof(r));
	cin >> n >> k >> m;
	for(int i = 1 ;i <= m;i ++) {
		int t1, t2, t3, t4;
		cin >> t1 >> t2 >> t3 >> t4;
		r[t1][t2][t3][t4] = r[t3][t4][t1][t2] = true;
	}
	for(int i = 1;i <= k;i ++) cin >> S[i].fi >> S[i].se;
	int d = 0;
	for(int i = 1;i <= n;i ++){
		for(int j = 1;j <= n;j ++){
			if(lt[i][j] == 0){
				d++;
				loang(i, j, d);
			}
		}		
	}
	int ans = 0;
	for(int i = 1;i < k;i ++){
		for(int j = i+1;j <= k;j ++) if(lt[S[i].fi][S[i].se] != lt[S[j].fi][S[j].se]) ans ++;
	}
	cout << ans;
}

