#include<bits/stdc++.h>
using namespace std;
int ngto[10001];
void sngto(){
	for(int i=0;i<10000;i++) ngto[i]=1;
	ngto[0]=0;
	ngto[1]=0;
	for(int i=2;i<10000;i++){
		if(ngto[i]){
			for(int j=2*i;j<10000;j+=i) ngto[j]=0;
		}
	}
}
int xuly(int a,int b){
	if(a==b){
		cout<<0<<endl;
		return 1;
	}
	queue<int> q;
	int mark[10001]={0},dem[10001];
	q.push(a);
	mark[a]=1;
	dem[a]=0;
	while(!q.empty()){
		int x=q.front(); q.pop();
		int i=1;
		while(i<=1000){
			int p=x/(i*10);
			int tmp=x%i;
			for(int j=0;j<=9;j++){
				int v=p*i*10+i*j+tmp;
				if(v>1000 && ngto[v]==1 && mark[v]==0){
					dem[v]=dem[x]+1;
					mark[v]=1;
					if(v==b){
						cout<<dem[v]<<endl;
						return 1;
					}
					else q.push(v);
				}
			}
			i*=10;
		}
	}
	return 1;
}
main(){
	sngto();
	int test;
	cin>>test;
	while(test--){
		int a,b;
		cin>>a>>b;
		xuly(a,b);
	}
}
