#include<bits/stdc++.h>
using namespace std;
long long N,M;
bool kt(long long x,long long y){
	if(x < 1 || y < 1) return false;
	if(x > N || y > M) return false;
	if(x == 1 && y == 1) return false;
	return true;
}
void Try(){
	long  c[5] = {0,-1,0,0,1}, d[5] = {0,0,-1,1,0};
	long n, m;
	cin >> N >> M;
	long a[N+1][M+1],b[N+1][M+1];
	for(long i = 1;i <= N;i ++)
		for(long long j = 1;j <= M;j ++) b[i][j] = 0;
	for(long i = 1;i <= N;i ++)
		for(long long j = 1;j <= M;j ++) 
			cin >> a[i][j];
	b[1][1] = a[1][1];
	queue <long long > x[2];
	x[1].push(1);x[0].push(1);
	while(x[1].size() > 0){
		m = x[1].front();n = x[0].front();
		x[0].pop();
		x[1].pop();
		for(long long i = 1;i <= 4; i ++)
			if(kt( n + c[i] , m + d[i] ))
			if( b[ n + c[i] ][m + d[i] ] == 0 || b[ n+c[i] ][ m+d[i] ] > b[n][m] + a[n+c[i]][ m + d[i] ]){
				b[n+c[i]][m+d[i]] = b[n][m]+a[n+c[i]][m+d[i]];
				x[0].push(n+c[i]);
				x[1].push(m+d[i]);
			}
	}
	cout << b[N][M] << endl;
}
main(){
	long long T;
	cin >> T;
	for(long long i = 1;i <= T;i ++)
	Try();
}
