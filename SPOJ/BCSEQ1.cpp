#include<bits/stdc++.h>
using namespace std;
int xuly(int a[], int n){
	for(int i=1;i<=n;i++)
		if(a[n]%a[i]==0){
			int k=2;
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]*k) break;
				else if(a[j]==a[i]*k) k++;
				if(a[i]*k==a[n]) return a[i];
			}
		}
	return a[n];	
}
main(){
	int test;
	cin>>test;
	while(test--){
		int n,tt;
		cin>>tt>>n;
		int a[10005],x; a[0]=0;
		for(int i=1;i<=n;i++){
			cin>>x;
			a[i]=a[i-1]+x;
		}
		cout<<tt<<" "<<xuly(a,n)<<endl;
	}
}

