#include<bits/stdc++.h>
using namespace std;
void in(long long a[], int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void merge(long long a[],int l,int m,int r){
	long long lrr[100005],rrr[100005];
	for(int i=l;i<=m;i++) lrr[i-l]=a[i];
	for(int i=m+1;i<=r;i++) rrr[i-m-1]=a[i];
	int i=0,j=0,k=l;
	while(i<=m-l && j<=r-m-1){
		if(lrr[i]<=rrr[j]){
			a[k]=lrr[i];
			k++;
			i++;
		}
		else{
			a[k]=rrr[j];
			k++;
			j++;
		}
	}
	while(i<=m-l){
		a[k]=lrr[i];
		k++;
		i++;
	}
	while(j<=r-m-1){
		a[k]=rrr[j];
		k++;
		j++;
	}
}
void mergesort(long long a[],int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}
main(){
	int test;
	test=1;
	while(test--){
		long long a[100005];
		int n;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		mergesort(a,0,n-1);
		in(a,n);
	}
}
