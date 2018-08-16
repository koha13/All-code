#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[100005];
	a[0]=-9999999;
	for(int i=1;i<=n;i++) cin>>a[i];
	int d=1;
	int i=n;
	while(a[i]>=a[i-1]){
		i--;
		d++;
	}
	int kt=1;
	for(int j=i-1;j>=1;j--)
		if(a[j]<a[j-1]){
			kt=0; break;
		}
	if(kt==1) cout<<d;
	else cout<<-1;
}

