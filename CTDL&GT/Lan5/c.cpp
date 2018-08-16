#include<bits/stdc++.h>
using namespace std;
int n,a[101];
void in(){
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		int kt=0;
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				kt=1;
			}
		if(kt==1) cout<<"Buoc "<<i+1<<": ", in();
		else return 0;
	}
	return 0;
}
