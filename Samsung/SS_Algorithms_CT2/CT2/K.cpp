#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
void SLV(string s){
	int Res = 0;
	int n =s.length();
	for(int i = 0 ; i < n ; i++){
		int m = min(i+1,n-i);
		int M = 1; 
		if(s[i] != s[i+1])
			for(int j = 1 ; j < m ;j++) if(s[i - j] == s[i+j] ) M+=2;else break;
		else{
			m = min(i+1,n-i-1);
			M++;
			for(int j = 1 ; j < m ;j++) if(s[i - j] == s[i+j+1] ) M+=2;else break;
		}
		if(M > Res ) Res = M; 
	}
	cout << Res <<endl;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s;
	s="abcbad";
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		SLV(s);
	}
}

