#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,s,a[100000],dem=999999,kt=0;
		cin>>n>>s;
		for(int i=0;i<n;i++) cin>>a[i];
		int tong=0,max=0;
		int dau=0;
		for(int i=0;i<n;i++){
			tong+=a[i];
			max++;
			while(tong-a[dau]>=s){
				tong-=a[dau];
				dau++;
				max--;
			}
			if(tong>=s){
				if(max<dem) dem=max;
				kt=1;	
			} 
		}
		if(kt==0) cout<<"0\n";
		else cout<<dem<<endl;
	}
}

