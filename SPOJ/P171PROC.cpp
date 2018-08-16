#include<bits/stdc++.h>
using namespace std;
main(){
	int n; double l;
	cin>>n>>l;
	double a[100005];
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	double x=a[1];
	double y=l-a[n];
	double tmp=(x>y)?x:y;
	double max=0;
	for(int i=2;i<=n;i++){
		if(abs(a[i]-a[i-1])>max) max=abs(a[i]-a[i-1]);
	}
	double kq=(tmp>max/2)?tmp:max/2;
	cout<<setprecision(10)<<fixed<<kq;
}

