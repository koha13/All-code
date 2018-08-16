#include<bits/stdc++.h>
using namespace std;
bool xuly(int a[], int n, int s){
	if(s==0) return true;
	if(n==0 && s!=0) return false;
	if(a[n-1]>s) return xuly(a,n-1,s);
	return xuly(a,n-1,s) || xuly(a,n-1,s-a[n-1]);
}
main(){
	int n,s,a[300];
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(xuly(a,n,s)) cout<<"YES";
	else cout<<"NO";
}
