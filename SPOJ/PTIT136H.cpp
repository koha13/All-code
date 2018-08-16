#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a[100];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int b[100];
	int dau=1;
	int duoi=n;
	for(int i=1;i<=n;i+=2){
		b[i]=dau;
		dau++;
		b[i+1]=duoi;
		duoi--;
	}
	int d=1;
	while(d<=n){
		int vitri;
		for(int i=1;i<=n;i++)
			if(a[i]==b[d]) vitri=i;
		int dem=0;
		if(a[vitri]>vitri){
			int i=vitri;
			while(a[i]>i){
				int tg=a[i];
				a[i]=a[i+1];
				a[i+1]=tg;
				i++;
				dem++;
			}
		}
		else{
			int i=vitri;
			while(a[i]<i){
				int tg=a[i];
				a[i]=a[i-1];
				a[i-1]=tg;
				i--;
				dem++;
			}
		}
		cout<<dem<<endl;
		d++;
	}
}

