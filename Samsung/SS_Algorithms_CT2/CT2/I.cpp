#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int a[1001][101],n,k;
int SLV(int b[]){
	for(int i = 0 ; i <= n ; i++)
		for(int j = 0 ; j < k ;  j ++) a[i][j] = -Base;
	a[0][0] = 0;
	for(int i = 1 ; i <= n ; i++)
		for(int j = 0 ; j < k ;  j ++){
			int  t = j - b[i];
			if(t < 0 ) t += k;
			a[i][j] = max(a[i-1][j],a[i-1][t]+1);
		}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	int b[1001];
	for(int  i = 1 ;  i <= n ; i++){
		cin >> b[i];
		b[i] = b[i]%k;
	}
	SLV(b);
	cout << a[n][0];
}

