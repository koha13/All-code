#include<bits/stdc++.h>
using namespace std;
long long mt[10][10],cot[10]={0},n,fopt,f,a[10];
void xuly(){
	long long kq=0;
	for(int i=1;i<=n;i++) kq+=mt[i][a[i]];
	if(kq<fopt) fopt=kq;
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==0){
			a[i]=j;
			cot[j]=1;
			if(i==n) xuly();
			else Try(i+1);
			cot[j]=0;
		}
	}
}
main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		for(int i=1;i<10;i++) cot[i]=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++) cin>>mt[i][j];
		fopt=999999999;
		Try(1);
		cout<<fopt<<endl;
	}
}

