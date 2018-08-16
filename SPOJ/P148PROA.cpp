#include<bits/stdc++.h>
using namespace std;
long long n;
main(){
	while(1){
	int dem=1;
	cin>>n;
	if(n==0) break;
	while(n!=1){
		if(n%2==0) n/=2;
		else n=n*3+1;
		dem++;
	}
	cout<<dem<<endl;
	}
}


