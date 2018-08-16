#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[105],b[105];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	for(int i=1;i<=n;i++)
		if(a[i]>b[i]){
			cout<<"NO";
			return 0;
		}
	cout<<"YES";
	return 0;
}
