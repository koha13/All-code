#include<bits/stdc++.h>
using namespace std;
struct so{
	int bd,kt;
};
int cmp(so a1,so a2){
	if(a1.kt<a2.kt) return 1;
	return 0;
}
main(){
	int n;
	so a[10005];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i].bd>>a[i].kt;
	sort(a,a+n,cmp);
	//for(int i=0;i<n;i++) cout<<a[i].bd<<" "<<a[i].kt<<endl;
	int dem=0;
	for(int i=0;i<n;){
		int j=i+1;
		while(a[i].kt>a[j].bd && j<n) j++;
		i=j;
		dem++;
	}
	cout<<dem;
}

