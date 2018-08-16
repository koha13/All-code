#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
int kt(){
	int dem=0;
	for(int i=1;i<=n;i++)
		if(a[i]==1) dem++;
	if(dem==k) return 1;
	return 0;
}
void in(){
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			if(kt()) in();
		}
		else Try(i+1);
	}
}
main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>k;
		Try(1);		
	}

}
