#include<bits/stdc++.h>
using namespace std;
int n,mt[20][20],fopt=999999,a[20],used[20]={0},s=0,mtmin=9999999,x[20];
void Try(int i){
	for(int j=2;j<=n;j++)
		if(used[j]==0){
			used[j]=1;
			a[i]=j;
			s+=mt[a[i-1]][a[i]];
			if(i==n){
				int tong=s+mt[a[n]][a[1]];
				if(tong<fopt){
					fopt=tong;
				}
			}
			else{
				int g=s+(n-i+1)*mtmin<fopt;
				if(g<fopt) Try(i+1);
			}
			used[j]=0;
			s-=mt[a[i-1]][a[i]];
		}
}
main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			int tmp;
			cin>>tmp;
			if(tmp<mtmin && tmp!=0) mtmin=tmp;
			mt[i][j]=tmp;
		}
	a[1]=1;
	Try(2); cout<<fopt;
}
