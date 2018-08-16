#include<bits/stdc++.h>
using namespace std;
int sb(int a[],int dau,int dit,int x){
	int mi,ans=-1;
	while(dau<=dit){
		mi=(dau+dit)/2;
		if(a[mi]<=x){
			ans=mi;
			dau=mi+1;
		}
		else dit=mi-1;
	}
	return ans;
}
main(){
	int n,m;
	cin>>n>>m;
	int a[n+10],b[m+10];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	sort(a,a+n);
	for(int i=0;i<m;i++){
		int x=b[i];
		int tmp=sb(a,0,n,x);
		if(tmp==-1) cout<<"0\n";
		else cout<<tmp+1<<endl;
	}
}

