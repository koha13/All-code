#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int a[100001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,b,k;
	cin >> n >> k >> b;
	for(int i = 0 ; i < b ; i++){
		int x;
		cin >> x;
		a[x] = 1;
	}
	for(int i =1 ; i <=  n ; i ++) a[i] = a[i] + a[i-1];
	int M = Base;
	for(int i = 1; i + k <= n ; i++ )
		if(a[i + k] - a[i] < M ) M = a[i + k] - a[i];
	cout << M;
}

