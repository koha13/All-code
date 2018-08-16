#include<bits/stdc++.h>
using namespace std;
struct khach{
	int den, tg;
};
int cmp(khach a, khach b){
	return a.den<b.den;
}
main(){
	int n,kq;
	khach a[101];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].den>>a[i].tg;
	sort(a+1,a+1+n,cmp);
	kq=a[1].den+a[1].tg;
	for(int i=2;i<=n;i++){
		if(a[i].den>kq) kq=a[i].den;
		kq+=a[i].tg;
	}
	cout<<kq;
}
