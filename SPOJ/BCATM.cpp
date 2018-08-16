#include<bits/stdc++.h>
using namespace std;
int n,s,a[35],unused[35]={0},dem=0;
int cmp(int a,int b){
	return(a>b);
}
bool Try(int k){
	if(k==0) return true;
	for(int i=1;i<=n;i++){
		if(unused[i]==0 && k-a[i]>=0){
			unused[i]=1;
			if(Try(k-a[i])){
				dem++;
				return true;
			}
			unused[i]=0;
		}
	}
	return false;
}
main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n,cmp);
	if(Try(s)) cout<<dem;
	else cout<<-1;
}
