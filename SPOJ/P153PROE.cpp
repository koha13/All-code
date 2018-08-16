#include<bits/stdc++.h>
using namespace std;
main(){
	long long n,a[100009];
	cin>>n;
	for(int i=0;i<=n;i++) cin>>a[i];
	int i=n,kt=1;
	while(i>1){
		if(a[i]%i!=0){
			kt=0; break;
		}
		else{
			long long tmp=a[i]/i;
			for(int j=0;j<i;j++){
				a[j]+=tmp;
			}
			i--;
		}
	}
	if(kt==1) cout<<"Yes";
	else cout<<"No";
}

