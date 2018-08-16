#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
	return(a>b);
}
main(){
	int n,k,a[100005];
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a+1,a+n,cmp);
	long long kq=0;
	for(int i=0;i<=k;i++) kq+=a[i];
	for(int i=k+1;i<n;i++) kq-=a[i];
	cout<<kq;
}

