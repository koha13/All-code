#include<bits/stdc++.h>
using namespace std;
struct kh{
	int t,d;
};
int cmp(kh a1,kh a2){
	return (a1.t<a2.t);
}
main(){
	int n; cin>>n;
	kh a[101];
	for(int i=1;i<=n;i++) cin>>a[i].t>>a[i].d;
	sort(a+1,a+1+n,cmp);
	int kq=a[1].t+a[1].d;
	for(int i=2;i<=n;i++){
		if(kq>=a[i].t) kq+=a[i].d;
		else kq=a[i].t+a[i].d;
	}
	cout<<kq;
}
