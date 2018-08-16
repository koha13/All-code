#include<bits/stdc++.h>
using namespace std;
int nen(int a){
	int kq=0;
	while(a>0){
		kq+=a%10;
		a/=10;
	}
	return kq;
}
main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		while(n>9){
			n=nen(n);
		}
		cout<<n<<endl;
	}
}

