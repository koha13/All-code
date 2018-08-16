#include<bits/stdc++.h>
using namespace std;
int m,n; char mt[1005][1005];
main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n>>m;
		int dem=0;
		for(int i=0;i<n;i++)
			cin>>mt[i];
		for(int i=0;i<n-1;i++)
			for(int j=0;j<m;j++){
				if(mt[i][j]==mt[i+1][j+1] && mt[i][j]!=mt[i][j+1]) dem++;
				if(mt[i][j]==mt[i-1][j+1] && mt[i][j]!=mt[i][j+1]) dem++;
			}
		cout<<dem<<endl;
	}
}
