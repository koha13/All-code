
#include <iostream>
#include <queue>
using namespace std;
typedef struct {
	int x;
	int y;
}data;
int main(){
	int t;
	cin >> t;
	while(t--){
	
	int s[500][500];
	int dx[8]={-1,-1,-1,0,0,1,1,1};
	int dy[8]={-1,0,1,-1,1,-1,0,1};
	int n , m ,dem=0;
	cin >> n>>m;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < m ; j ++) cin >> s[i][j];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(s[i][j] == 1){
				queue <data> Q;
				dem++;
				data a;
				a.x = i;
				a.y = j;
				Q.push(a);
				while(!Q.empty()){
					data b = Q.front();
					Q.pop();
					for(int x = 0 ; x < 8; x++)
						if( b.x+dx[x] < n && b.x+dx[x] >=0 && b.y + dy[x] < m && b.y +dy[x]>=0 ){
							if(s[b.x+dx[x]][b.y+dy[x]] == 1){
								data z;
								z.x = b.x+dx[x];
								z.y = b.y+dy[x];
								Q.push(z);
								s[b.x+dx[x]][b.y+dy[x]] =2;
							}
						}
					
					
				}
			}
		}
	}
	cout << dem<<endl;
	}
}
