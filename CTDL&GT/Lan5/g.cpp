#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,a[100009];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
//		for(int i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
		int min=abs(a[1]-a[0]),dem=1;
		for(int i=1;i<n-1;i++){
			if(abs(a[i+1]-a[i])<min){
				min=abs(a[i+1]-a[i]);
				dem=1;
			}
			else if(abs(a[i+1]-a[i])==min) dem++;
		}
		cout<<min<<" "<<dem<<endl;
	}
}
