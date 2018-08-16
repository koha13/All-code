#include<bits/stdc++.h>
using namespace std;
void in(int k,int a[]){
	for(int i=0;i<k;i++) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		int t=a[i],j=i-1;
		while(j>=0 && a[j]>t) a[j+1]=a[j],j--;
		a[j+1]=t;
		cout<<"Buoc "<<i<<": "; in(i+1,a);
	}
}
