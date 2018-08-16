#include <iostream>
#include <queue>
using namespace std;
bool  a[1000][1000];
int chuaxet[1000];
int Phia[1000];
int n;
int BFS(int key){
	queue <int> Q;
	Q.push(key);
	chuaxet[key] = 1;
	Phia[key] = 1;
	while(!Q.empty()){
		int x =Q.front();
		Q.pop();
		for(int j  = 1 ; j <= n ; j++){
			if( a[x][j] ){
				if(chuaxet[j] == 0){
					if(Phia[x] == 1) Phia[j] =2; 
					else Phia[j] =1;
					chuaxet[j] =1;
					Q.push(j);
				}
				else{
					if(Phia[x] == Phia[j] ) return 0;
				}
			}
			
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int  m;
		cin >>n>> m ;
		for(int i = 1 ; i <= n ; i++ ){
			for(int j = 1 ; j <= n ; j++)
				a[i][j] = 0;
		}
		for(int i = 1 ; i<=n ; i++){
			Phia[i] = 0;
			chuaxet[i] =0;
		}
		for(int i =1 ; i <= m ; i++){
			int x, y ;
			cin >> x>>y;
			a[x][y] =1;
			a[y][x] =1;
		}
		int oki = 1;
		for(int i = 1 ; i <= n ; i++){
			if(chuaxet[i] == 0)
				oki *= BFS(i);
		}
		if(oki == 1) cout <<"YES\n";
		else cout << "NO\n";
	}
}
