#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#define Max 10000000
#define ll long long
#define Base 1000000007
using namespace std;
int C(string s){
	int a[27];
	for(int i = 0 ; i < 27; i++) a[i]=0;
	for(int i = 0 ; i <s.length() ; i++) a[s[i]-'A']++;
	int Ans =0;
	for(int i = 0 ;  i < 27 ; i++) Ans += a[i]%2;
	return Ans;
}
int dau[53];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s;
	cin >> s;
	int Res =0;
	int n = s.length();
	for(int i = 0 ; i < n ;i++){
		if(dau[i] == 0){
			string S = "";
			for(int j = i+1 ; j < n ; j++){
				if(s[j] == s[i]){
					dau[j] =1;
					break;
				}
					S+=s[j];
			}
			Res += C(S);
		}
		
	}
	cout <<Res/2;
}

