#include<bits/stdc++.h>
using namespace std;
int n,k,s,a[21],kq;
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			int tmp=0;
			for(int t=1;t<=k;t++) tmp+=a[t];
			if(tmp==s) kq++;
		}
		else Try(i+1);
	}
}
main(){
	a[0]=0;
	while(1){
		cin>>n>>k>>s;
		kq=0;
		if(n==0 && k==0 && s==0) break;
		Try(1);
		cout<<kq<<endl;
	}
}

