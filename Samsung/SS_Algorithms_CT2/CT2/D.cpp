#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
long long a[200005],na;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long n, k , s;
	cin >> n >> k>>s;
	if( k <= s && s <= k*(n-1)  ){
		int x = 1;
		int Z = 1;
		while(k > 0){
			while(s != k ){
				a[na++] = x;
				if(s - n+Z >= k ){
					s-=n-Z;
					k--;
					if(x == Z ) x = n;
					else x = Z;
					cout << Z <<endl;
				} 
				else break;
			}
			Z++;
		}
		for(int i = 0 ; i< na ; i++) cout <<a[i]<<" ";
	}
	else cout << "NO";
}

