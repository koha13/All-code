#include<bits/stdc++.h>
using namespace std;
void in(int n,int a[]){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];    // nhap day ban dau
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[min]) min=j;
		int t=a[i];
		a[i]=a[min];
		a[min]=t;
		cout<<"Buoc "<<i+1<<": "; in(n,a);
	}
}
