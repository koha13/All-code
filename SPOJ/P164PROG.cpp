#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a[1000];
	a[0]=0;
	for(int i=1;i<1000;i++) a[i]=a[i-1]+i;
	cin>>n;
	int dem=0;
	int i=1;
	while(n-a[i]>=0){
		n-=a[i];
		i++;
		dem++;
	}
	cout<<dem;
}

