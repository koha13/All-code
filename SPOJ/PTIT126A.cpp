#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m;
	while(1){
		cin>>m>>n;
		if(n==m && m==0) break;
		double a,kq[25],max,tmp;
		max=0;
		for(int i=0;i<m;i++){
			cin>>kq[i];
			if(abs(kq[i])>max) max=abs(kq[i]);
		}
		tmp=max;
		for(int i=1;i<n;i++){
			max=0;
			for(int j=0;j<m;j++){
				cin>>a;
				if(tmp) kq[j]=kq[j]*a/tmp;
				if(abs(kq[j])>max) max=abs(kq[j]);
			}
			tmp=max;
		}
		int t=0;
		for(int i=1;i<m;i++)
			if(kq[i]>=kq[t]) t=i;
		cout<<t+1<<endl;
	}
}
