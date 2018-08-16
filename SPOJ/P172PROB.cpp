#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	string s;
	cin>>n>>k>>s;
	int vt1,vt2,x,y;
	for(int i=0;i<n;i++){
		if(s[i]=='G') vt1=i;
		if(s[i]=='T') vt2=i;
	}	
	x=(vt1>vt2)?vt2:vt1;
	y=(vt1>vt2)?vt1:vt2;
	if((y-x)%k==0){
		for(int i=x;i<=y-k;i+=k)
			if(s[i+k]=='#'){
				cout<<"NO";
				return 0;
			}
		cout<<"YES";
		return 0;	
	}
	else cout<<"NO";
	return 0;
}

