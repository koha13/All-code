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
	for(int i = 1 ; i < n ; i++){
		int M = i;
		for(int j = i+1 ; j <= n ; j++) if(a[M] >  a[j]) M = j;
		swap(a[i],a[M]);
		cout << "Buoc " <<B++<<": ";
		for(int z = 1; z <= n ; z++ ) cout <<a[z] <<" ";
		cout <<endl;
	}
	
	
}

