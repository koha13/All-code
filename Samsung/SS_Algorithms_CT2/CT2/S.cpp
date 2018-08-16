#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int a[101][101];
int d[101][101];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	for(int i = 1 ; i <= 100 ; i++)
		for(int j = 1 ; j <= 100 ; j++)  a[i][j] = Base;
	int n,m;
	cin >> n>>m;
	for(int i = 0 ; i < m ; i++){
		int x,y,z;
		cin >> x>>y>>z;
		a[x][y] =z;
		a[y][x]=z;
	}
	for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j <= n ; j++)  d[i][j] = a[i][j];
	for(int i = 1 ; i <= n ; i++ ) d[i][i] = 0;
	for(int k = 1 ; k <= n ; k++)
		for(int i = 1 ; i <= n ; i++)
			for(int j = 1 ; j <= n ; j++) if(d[i][j] > d[i][k]+d[k][j]) d[i][j] = d[i][k]+d[k][j];
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >> x >> y;
		cout << d[x][y] <<endl;
	}
	
}

