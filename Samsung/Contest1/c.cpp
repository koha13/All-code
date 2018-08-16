#include<bits/stdc++.h>
using namespace std;
int cot[20]={0},cheo1[30]={0},cheo2[30]={0},dem=0,n,a[10],opt=0,mt[10][10];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==0 && cheo1[i+j-1]==0 && cheo2[i-j+n]==0){
			a[i]=j;
			cot[j]=1;
			cheo1[i+j-1]=1;
			cheo2[i-j+n]=1;
			if(i==n){
				int diem=0;
				for(int k=1;k<=n;k++){
					diem+=mt[k][a[k]];
				}
				if(diem>opt) opt=diem;
			}
			else Try(i+1);
			cot[j]=0;
			cheo1[i+j-1]=0;
			cheo2[i-j+n]=0;
		}
	}
}
main(){
	int test;
	cin>>test;
	n=8;
	while(test--){
		opt=0;
		for(int i=1;i<=8;i++)
			for(int j=1;j<=8;j++) cin>>mt[i][j];
		Try(1);
		cout<<opt<<endl;;
	}
}
