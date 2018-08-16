#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	vector<int>a;
	cin>>n;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		a.push_back(tmp);
	}
	long long dem=0;
	for(int i=0,j=n-1;i<n,j>=0;){
		if(a[i]==a[j]){
			i++;
			j--;
			if(i>=j) break;
		}
		else{
			if(a[i]<a[j]){
				dem++;
				a[i+1]=a[i]+a[i+1];
				i++;
			}
			else{
				dem++;
				a[j-1]=a[j]+a[j-1];
				j--;
			}
		}	
	}
	cout<<dem;
}

