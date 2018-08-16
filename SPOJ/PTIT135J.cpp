#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		double n,l,m;
		cin>>n>>l>>m;
		int dem=0;
		while(n<m){
			n=n*(100+l)/100;
			dem++;
		}
		cout<<dem<<endl;
	}
}

