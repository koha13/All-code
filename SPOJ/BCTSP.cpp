#include<bits/stdc++.h>
using namespace std;
int n,a[20][20],unused[20]={0},fopt=9999,x[20],f=0,smin;
void update(){
	int sum=f+a[x[n]][x[1]];
	if(sum<fopt) fopt=sum;
}
void Try(int i){
	for(int j=2;j<=n;j++){
		if(unused[j]==0){
			x[i]=j;
			unused[j]=1;
			f+=a[x[i-1]][x[i]];
			if(i==n){
				update();
			}
			else if(f+smin*(n-i+1)<fopt) Try(i+1);
			f-=a[x[i-1]][x[i]];
			unused[j]=0;
		}
	}
}
main(){
	x[1]=1;
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	smin=a[1][2];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i][j]!=0 && a[i][j]<smin) smin=a[i][j];
	Try(2);
	cout<<fopt;
}

