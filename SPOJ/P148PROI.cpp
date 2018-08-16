#include<bits/stdc++.h>
using namespace std;
int main(){
	long long p,q; int n;
	long long a[95];
	cin>>p>>q>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	long long tu,mau;
	tu=p; mau=q;
	for(int i=1;i<=n-1;i++){
		if((long long)tu/mau==a[i]){
			cout<<(double)tu/mau<<" "<<(long long)tu/mau<<" "<<a[i]<<endl;
			long long tmp=tu;
			tu=mau;
			mau=tmp-mau*a[i];
			
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	if((double)tu/mau==a[n]) cout<<"YES";
	else cout<<"NO";
	return 0;
}
