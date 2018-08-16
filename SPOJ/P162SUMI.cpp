#include<bits/stdc++.h>
using namespace std;
int dem=0,a[5];
bool Try(int n){
	if(n==0) return true;
	for(int i=1;i<=3;i++){
		if(n-a[i]>=0){
			if(Try(n-a[i])){
				dem++;
				return true;
			}
		}
	}
	return false;
}
main(){
	int n;
	cin>>n;
	for(int i=1;i<=3;i++) cin>>a[i];
	sort(a+1,a+1+3);
	//for(int i=1;i<=3;i++) cout<<a[i]<<" ";
	Try(n);
	cout<<dem;
}

