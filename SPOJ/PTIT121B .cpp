#include<iostream>
using namespace std;
int a[20],n;
void khoitao(){
	cin>>n;
	for(int i=1;i<=n;i++) a[i]=0;
}
void in(){
	int b[20];
	for(int i=n-1;i>=1;i--)
		if(a[i]==1){
			if(a[i+1]==1) b[i+1]=0;
			else b[i+1]=1;
		}
		else b[i+1]=a[i+1];
	b[1]=a[1];
	for(int i=1;i<=n;i++) cout<<b[i];
	cout<<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) in();
		else Try(i+1);
	}
}
main(){
	khoitao();
	Try(1);
}
