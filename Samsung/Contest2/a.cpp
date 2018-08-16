#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int dem=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2==0) dem++;
				if(i!=n/i){
					if(n/i%2==0) dem++;
				}	
			}
		}
		cout<<dem<<endl;
	}
}
