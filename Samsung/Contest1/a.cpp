#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
vector<string> v;
int kt(){
	int dem,ktra=0;
	for(int i=1;i<=n-k+1;i++){
		if(a[i]==0){
			dem=0;
			for(int j=i;j<=i+k-1;j++){
				if(a[j]==0) dem++;
			}	
			if(dem==k) ktra++;
		}	
	}
	if(ktra==1) return 1;
	return 0;
}
void in(){
	string s="";
	for(int i=1;i<=n;i++){
		if(a[i]==0) s+="A";
		else s+="B";		
	}
	v.push_back(s);
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
	cin>>n>>k;
	Try(1);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
}
