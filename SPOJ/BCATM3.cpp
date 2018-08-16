#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	int a[10]={500,200,100,50,20,10,5,2,1};
	while(test--){
		int t,d=0;
		cin>>t;
		for(int i=0;i<9;){
			if(t>=a[i]){
				t-=a[i];
				d++;
			}
			else i++;
		}
		cout<<d<<endl;
	}
}

