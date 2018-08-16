#include<bits/stdc++.h>
using namespace std;
int mt[1001][1001];
main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>mt[i][j];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(mt[i][j]!=0) cout<<j<<" ";
		cout<<endl;
	}
}
