#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > f(1001, vector<int>(1001, 0));
main(){
	string a,b;
	cin>>a>>b;
	a="0"+a;
	b="0"+b;
	f[0][0]=0;
	for(int i=1;i<a.length();i++)
		for(int j=1;j<b.length();j++){
			if(a[i]==b[j]) f[i][j]=f[i-1][j-1]+1;
			else f[i][j]=max(f[i-1][j],f[i][j-1]);
		}
	cout<<f[a.length()-1][b.length()-1];
}
