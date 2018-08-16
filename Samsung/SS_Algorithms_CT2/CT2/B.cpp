#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	long long M1 = Base,M2 = Base;
	cin >>n;
	for(int i = 0 ; i < n ; i++){
		int x,y;
		cin >> x >>y;
		if(M1 > x) M1 = x;
		if(M2 > y) M2  = y;
	}
	cout << M1 *M2;
}

