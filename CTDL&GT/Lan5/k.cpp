#include<bits/stdc++.h>
using namespace std;
struct hang{
	int t,d;
};
int cmp(hang a, hang b){
	return (a.d-a.t)>(b.d-b.t);
}
main(){
	int n,k;
	hang a[100005];
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i].t;
	for(int i=1;i<=n;i++) cin>>a[i].d;
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++) cout<<a[i].t<<" "<<a[i].d<<endl;
	int kq=0;
	for(int i=1;i<=k;i++) kq+=a[i].t;
	for(int i=k+1;i<=n;i++) kq+=a[i].d;
	cout<<kq;
}
