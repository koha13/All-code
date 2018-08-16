#include<bits/stdc++.h>
using namespace std;
int cot[20]={0},cheo1[30]={0},cheo2[30]={0},n,dem;
void Try(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==0 && cheo1[i+j-1]==0 && cheo2[i-j+n]==0){
			cot[j]=1;
			cheo1[i+j-1]=1;
			cheo2[i-j+n]=1;
			if(i==n){
				dem++;
			}
			else Try(i+1);
			cot[j]=0;
			cheo1[i+j-1]=0;
			cheo2[i-j+n]=0;
		}
	}
}
main(){
	dem=0;
	cin>>n;
	Try(1);
	cout<<dem<<endl;;
}
