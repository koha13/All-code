#include <stdio.h>
#include <iostream>
#include <vector>
#define Max 200001
using namespace std;
vector <int> a[Max];
int   run = 0;
long long Res[Max];
long long DFS(int x){
	int t = run; 	run++;		Res[x] = 1;
	for(int i = 0 ; i <  a[x].size() ; i++)	Res[x] += DFS( a[x][i] );
	Res[x] += run - t-1;
	return Res[x];
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	scanf("%d",&n);
	for(int i = 2 ; i <= n ; i++){
		int x;
		scanf("%d",&x);
		a[x].push_back(i);
	}
	DFS(1);
	for(int i = 1 ; i <= n ; i++) cout << Res[i]<<" ";
}
