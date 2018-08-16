#include<bits/stdc++.h>
using namespace std;
void in(int a[], int n){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
int sp(int a[],int l, int h){
	int pivot=a[h];
	int i=l-1;
	for(int j=l;j<h;j++){
		if(a[j]<=pivot){
			i++;
			int tmp=a[j];
			a[j]=a[i];
			a[i]=tmp;
		}
	}
	int tmp=a[i+1];
	a[i+1]=a[h];
	a[h]=tmp;
	return i+1;
}
void qsort(int a[],int l, int h){
	if(l<h){
		int pivot=sp(a,l,h);
		qsort(a,l,pivot-1);
		qsort(a,pivot+1,h);
	}
}
main(){
	int test;
	cin>>test;
	while(test--){
		int n,a[100005];
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		qsort(a,0,n-1);
		in(a,n);
	}
}
