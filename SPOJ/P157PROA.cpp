#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,a[1001]={0};
		cin>>n;
		for(int i=1;i<=n;i++){
			int tmp;
			cin>>tmp;
			a[tmp]++;
		}
		int smax=a[1],vt=1;
		for(int i=1;i<=1000;i++)
			if(a[i]>smax ){
				smax=a[i];
				vt=i;
			}
		cout<<vt<<endl;
	}
}

