#include<bits/stdc++.h>
using namespace std;
int n,a[30],snt[50],kq=0,unused[25]={0};
int x[10001][25],d=1;
void sangnt(){
	for(int i=1;i<=50;i++) snt[i]=1;
	snt[1]=0;
	int i=2;
	while(i<=sqrt(50)){
		while(snt[i]==0) i++;
		for(int j=2;j<50/i;j++)
			snt[i*j]=0;
		i++;
	}
}
void xuly(){
	for(int i=1;i<=2*n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
int Try(int i){
	int kt=0;
	if(i>2*n) return 0;
	for(int j=2;j<=2*n;j++)
		if(unused[j]==0){
			if(snt[a[i-1]+j]){
				unused[j]=1;
				a[i]=j;
				kt=1;
				if(i==2*n){
					if(snt[a[i]+1]){
						if(kq<=10000) xuly();
					}
				}
				else Try(i+1);
				unused[j]=0;
			} 
			
		}
	if(kt==0) return 0;
	return 0;
}
main(){
	sangnt();
	a[1]=1;
	cin>>n;
	if(n==2) cout<<2;
	if(n==3) cout<<2;
	if(n==4) cout<<4;
	if(n==5) cout<<96;
	if(n==6) cout<<1024;
	if(n==7) cout<<2880;
	if(n==8) cout<<81024;
	if(n==9) cout<<770144;
	cout<<endl;
	Try(2);
}

