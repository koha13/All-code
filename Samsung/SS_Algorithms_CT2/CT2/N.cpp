#include <iostream>
using namespace std;

long long n,m, a[1000][1000];
bool chuaxet[1000];
void Init();//khoi tao 
int BFS(int i,int dinht);//duyet BFS
int main(){
	int t1;
	cin >> t1;
	while(t1--){
		Init();
		int dinh;
		int dinht;	
		int t2;
		cin >>  t2;	
		while(t2--){
			cin >> dinh; //nhap dinh can duyet
			cin >> dinht;
			for(int i = 0 ; i < n ; i++) chuaxet[i] = true ;
			if(BFS(dinh-1,dinht-1)) cout <<"YES" <<endl;
			else cout << "NO"<<endl;
		}
	}
}
void Init(){
	cin  >> n>>m;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++ )
			a[i][j] = 0;
	for(int i = 0 ; i < m ; i++ ){
		int x,y;
		cin >>x>>y;
		a[x-1][y-1] =1;
		a[y-1][x-1] =1;
	}
}
int BFS(int i,int dinht){
	long long 
		*queue = new long long [n+1],
		l=0,
		h=0,
		j;
	queue[l] = i;
	chuaxet[i] = false;
	while(l <= h){
		i = queue[l];
		if(i == dinht ) return 1;
		l++;
		for(j = 0 ; j < n ; j++){
			if(a[i][j] && chuaxet[j]){
				chuaxet[j] = false;
				h++;
				queue[h] = j;
			}
		}
	}
	return 0;
}

