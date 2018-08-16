#include <iostream>
#include <queue>
using namespace std;
bool a[1000][1000];
int BFS(int n){
	int chuaxet[1000];
	for(int i = 0; i < n ; i++) chuaxet[i] = 0;
	queue <int> Q;
	Q.push(0);
	chuaxet[0] = 1;
	while(!Q.empty()){
		int x =Q.front();
		Q.pop();
		for(int j  = 0 ; j < n ; j++){
			if(chuaxet[j] == 0 && a[x][j] ==1){
				chuaxet[j] =1;
				Q.push(j);
			}
		}
	}
	int oki =1;
	for(int i = 0 ; i < n ; i++) oki *= chuaxet[i];
	return oki;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		for(int  i = 0; i < n ; i ++)
			for(int  j = 0 ; j < n ; j++) a[i][j] =0;
		for(int i = 0 ; i < n -1 ; i++){
			int x , y;
			cin >> x >>y;
			a[--x][--y]= a[y][x] =1;
		}
		if(BFS(n)) cout << "YES\n";
		else cout <<"NO\n";
	}
}
