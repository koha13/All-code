#include<bits/stdc++.h>
using namespace std;
int a[100001],n,c,d;
int cmp(int a,int b){
	return(a>b);
}
main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>c>>d;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n,cmp);
//		for(int i=1;i<=n;i++) cout<<a[i]<<" "; cout<<endl;
		if(c>d){
			int tmp=c;
			c=d;
			d=tmp;
		}
		double tb1=0,tb2=0;
		for(int i=1;i<=c;i++){
			tb1+=(double)a[i];
		}
		tb1/=(double)c;
		for(int i=c+1;i<=c+d;i++)
			tb2+=(double)a[i];
		tb2/=(double)d;
		cout<<setprecision(6)<<fixed<<tb1+tb2<<endl;
	}
}
