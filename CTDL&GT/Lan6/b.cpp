#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
main(){
	int n;
	cin>>n;
	char t[5]; gets(t);
	for(int i=1;i<=n;i++){
		char s[10000001];
		gets(s);
		char *p=strtok(s," ");
		int tmp=atoi(p);
		a[i][tmp]=1;
		while(p!=NULL){
			p=strtok(NULL," ");
			int tmp=atoi(p);
			a[i][tmp]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1) cout<<1<<" ";
			else cout<<0<<" ";			
		}
		cout<<endl;
	}
}
