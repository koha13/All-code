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
	cin >> n;
	int a[101];
	for(int  i = 1 ; i <= n ; i++)
		cin >> a[i];
	int B = 1;
	for(int i = n ; i > 1 ; i--){
		for(int j = 1 ; j < i ; j++  ) if(a[j] > a[j+1]) swap(a[j],a[j+1]);
		cout << "Buoc " <<B++<<": ";
		for(int z = 1; z <= n ; z++ ) cout <<a[z] <<" ";
		cout <<endl;
		int oki = 0;
		for(int z = 1; z < n ; z++ ) if(a[z] > a[z+1]) {oki = 1; break;}
		if(oki == 0) break;
	}
}

