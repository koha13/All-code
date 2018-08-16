#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001];
int xuly(){
	if(n==2){
		cout<<a[1][2]/2<<" "<<a[1][2]/2;
		return 0;
	}
	int tmp=(a[1][2]+a[1][3]-a[2][3])/2;
	cout<<tmp<<" ";
	for(int i=2;i<=n;i++){
		tmp=a[i-1][i]-tmp;
		cout<<tmp<<" ";
	}
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	xuly();
}

