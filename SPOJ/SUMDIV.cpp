#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		long long tong=0;
		cin>>n;
		if(n==1) tong=1;
		else{
			tong=1+n;
			for(long long i=2;i<=sqrt(n);i++){
				if(n%i==0){
					tong+=i;
					if(n/i!=i) tong+=n/i;
				}
			}
		}
		cout<<tong<<endl;
	}
}

