#include<bits/stdc++.h>
using namespace std;
main(){
	int x;
	cin>>x;
	int dem=1,d=1;
	x-=d;
	while(x>0){
		d=d+dem;
		x-=d;
		dem++;
	}
	cout<<dem;
}

