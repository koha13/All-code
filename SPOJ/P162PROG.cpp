#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int dem=0;
	while(n>0){
		dem++;
		long long vk=1;
		while(1){
			if(2*vk>n) break;
			vk*=2;
		}
		n-=vk;
	}
	cout<<dem;
}

