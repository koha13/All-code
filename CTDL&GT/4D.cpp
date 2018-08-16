#include<bits/stdc++.h>
using namespace std;
int dx[]={0,-1,-1,-1,0,1,1,1};
int dy[]={1,1,0,-1,-1,-1,0,1};
main(){
	int m,n;
	cin>>n>>m;
	char t[5]; gets(t);
	char a[100][100];
	for(int i=0;i<n;i++) gets(a[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
	int max=0;
	int vti=1,vtj=1,kt=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++) if(a[i][j]=='.'){
			int tmp=0;
			for(int u=0;u<8;u++)
				for(int v=0;v<8;v++){
					if(a[i+dx[u]][j+dy[v]]=='o') tmp++;
				}
			if(tmp>max){
				max=tmp;
				vti=i;
				vtj=j;
				kt=1;
			}
		}
	if(kt==1) a[vti][vtj]='o';
	cout<<vti<<" "<<vtj<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
		
	int mark[100][100], kq=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(a[i][j]=='o'){
				for(int u=0;u<8;u++)
					for(int v=0;v<8;v++){
						if(a[i+dx[u]][j+dy[v]]=='o' && mark[i+dx[u]][j+dy[v]]!=1){
							kq++;
							mark[i+dx[u]][j+dy[v]]=1;
							mark[j+dy[v]][i+dx[u]]=1;
						}
					}
			}
	cout<<kq;
}
