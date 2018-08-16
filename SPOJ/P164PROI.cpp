#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	vector<int> c1;
	vector<int> c2;
	int arr[3001]={0},brr[3001]={0};
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		arr[a+b-1]++;
		int kt=0;
		for(int j=0;j<c1.size();j++)
		{
			if(a+b-1==c1[j]){
				kt=1;
				break;
			}
		}
		if(kt==0) c1.push_back(a+b-1);
		int kt1=0;
		for(int j=0;j<c2.size();j++)
		{
			if(a-b+1000==c2[j]){
				kt1=1;
				break;
			}
		}
		if(kt1==0) c2.push_back(a-b+1000);
		brr[a-b+1000]++;
	}
	int dem=0;
	for(int i=0;i<c1.size();i++){
		if(arr[c1[i]]>=2)
		dem+=arr[c1[i]];
	} 
	for(int i=0;i<c2.size();i++){
		if(brr[c2[i]]>=2)
		dem+=brr[c2[i]];
	} 
	cout<<dem;
}

