#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int a[50001][27];
void SL(string s){
	s=" "+s;
	int n = s.length();
	for(int i = 1 ; i < n  ; i++){
		for(int j = 0 ; j  < 27 ; j++) a[i][j] = a[i-1][j];
		a[i][s[i]-'a']++;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s;
	int n;
	cin >> s >> n;
	SL(s);
	while(n--){
		int x1,y1,x2,y2;
		cin >> x1>> y1 >> x2>> y2;
		int b[27] ,c[27];
		for(int i = 0 ; i < 27 ; i++){
			b[i] = a[y1][i] - a[x1-1][i];
			c[i] = a[y2][i] - a[x2-1][i];
		}
		int oki = 1;
		for(int i = 0 ; i < 27 ; i++)
			if(b[i] != c[i]) {
				cout <<"NO"<<endl;
				oki = 0;
				break;
			}
		if(oki)
			cout << "YES" <<endl;;
	}
}

