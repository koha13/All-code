#include<bits/stdc++.h>
using namespace std;
int kq=9999999,cot[10]={0};
int n,a[10][10],b[10];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==0){
			b[i]=a[i][j];
			cot[j]=1;
			if(i==n){
				int tmp=0;
				for(int k=1;k<=n;k++) tmp+=b[k];
				if(kq>tmp) kq=tmp;
			}
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
		kq=9999999;
		for(int i=1;i<=n;i++) cot[i]=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++) cin>>a[i][j];
		Try(1);
		cout<<kq<<endl;
	}
}
