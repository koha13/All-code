#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		int n,a[100009];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		int l,h;
		for(l=0;l<n-1;l++)
			if(a[l]>a[l+1]){
				break;
			}
		if(l==n-1){
			cout<<"YES\n";
			continue;
		}
		for(h=n-1;h>0;h--)
			if(a[h]<a[h-1]){
				break;
			}
		if(h==0){
			cout<<"YES\n";
			continue;
		}
		int min,max;
		min=a[l]; max=a[h];
		for(int i=l;i<=h;i++){
			if(a[i]<min) min=a[i];
			if(a[i]>max) max=a[i];
		}
		for(int i=l-1;i>=0;i--)
			if(a[i]>min){
				l=i;
				break;
			}
		for(int i=h+1;i<n;i++)
			if(a[i]<max){
				h=i;
				break;
			}
		cout<<h-l+1<<endl;
	}
}
