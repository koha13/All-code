#include<bits/stdc++.h>
using namespace std;
main(){
	int n,dem=0;
	cin>>n;
	int a[105],b[105];
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j!=i)
				if(b[j]==a[i]){
					dem++;
					break;
				}
		}
	}
	cout<<n-dem;
}

