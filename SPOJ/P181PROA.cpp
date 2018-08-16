#include<bits/stdc++.h>
using namespace std;
int a[105],n;
bool kt(int k, int i){
	if(a[k]%2==0 || a[i]%2==0) return false;
	if(i!=k && (i-k+1)%2==0) return false;
	return true;
}
bool Try(int k,int dem){
	if(k>n){
		if(dem%2==0){
			return false;
		}
		return true;
	}
	for(int i=n;i>=k;i--){
		if(kt(k,i)){
			if(Try(i+1,dem+1)){
				return true;
			}
		}
	}
	return false;
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(Try(1,0)) cout<<"yes";
	else cout<<"no";
}

