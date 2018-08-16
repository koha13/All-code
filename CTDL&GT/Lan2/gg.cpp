#include<bits/stdc++.h>
using namespace std;
int n,unused[20]={0},dem=0,fopt=99999,a[20];
string s[11];
int xuly(){
	int kq=0;
	for(int i=2;i<=n;i++)
	for(int j=0;j<s[a[i]].length();j++)
		for(int k=0;k<s[a[i-1]].length();k++)
			if(s[a[i]][j]==s[a[i-1]][k]) kq++;
	return kq;
}
int Try(int i){
	for(int j=1;j<=n;j++){
		if(unused[j]==0){
			unused[j]=1;
			a[i]=j;
			if(i==n){
				int tmp=xuly();
				if(tmp<fopt) fopt=tmp;
			}
			else Try(i+1);
			unused[j]=0;
		}
	}
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i];
	Try(1);
	cout<<fopt;
}

