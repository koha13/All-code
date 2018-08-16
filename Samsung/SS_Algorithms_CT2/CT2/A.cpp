#include <stdio.h>
#include <math.h>
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
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int Res =0;
		for(int i = 1 ; i*i <= n ; i++){
			if(n%i == 0 ){
				if( i % 2 == 0) Res++;
				if( (n / i ) % 2 == 0) Res++;
			} 
		}
		if((int ) sqrt(n) == sqrt(n) && (int ) sqrt(n) %2 ==0 ) Res--;
		cout << Res <<endl;
	}
}

