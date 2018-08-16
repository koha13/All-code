#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m;
	char a[101][101];
	while(1){
		cin>>n>>m;
		if(n==m && n==0) break;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++) cin>>a[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				if(a[i][j]=='.'){
					int d=0;
					if(i>0 && j>0){
						if(a[i][j+1]=='*') d++;
						else if(a[i][j-1]=='*') d++;
						else if(a[i+1][j]=='*') d++;
						else if(a[i-1][j]=='*') d++;
						else if(a[i-1][j-1]=='*') d++;
						else if(a[i+1][j+1]=='*') d++;
						else if(a[i-1][j+1]=='*') d++;
						else if(a[i+1][j-1]=='*') d++;
					}
					else if(i>0&&j==0){
						if(a[i][j+1]=='*') d++;
						else if(a[i+1][j]=='*') d++;
						else if(a[i-1][j]=='*') d++;
						else if(a[i+1][j+1]=='*') d++;
						else if(a[i-1][j]=='*') d++;
					}
					else if(i==0&&j>0){
						if(a[i+1][j]=='*') d++;
						else if(a[i+1][j+1]=='*') d++;
						else if(a[i][j+1]=='*') d++;
						else if(a[i][j-1]=='*') d++;
						else if(a[i+1][j-1]=='*') d++;
					}
					else if(i==0 && j==0){
						if(a[i][j+1]=='*') d++;
						else if(a[i+1][j]=='*') d++;
						else if(a[i+1][j+1]=='*') d++;
					}
					
					a[i][j]=d+'0';
				}
			}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cout<<a[i][j];
			cout<<endl;
		}
	}
}

