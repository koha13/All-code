#include<bits/stdc++.h>
using namespace std;
main(){
	int n; long long kq=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		kq+=pow(2,i);
	cout<<kq;
}

