#include<iostream>
using namespace std;
main(){
	int a[30],n,thutu=0;
	while(1){
		thutu++;
		int dem=0;
		cin>>n;
		if(n==0) break;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int dung=1;
		for(int i=1;i<n;i++)
			if(a[i]!=a[i+1]){
				dung=0;
				break;
			}
		if(dung==1) cout<<"Case "<<thutu<<": 0 iterations\n";
		if(dung==0){
			int kt=0;
			int thu=0;
			while(thu<1000){
				thu++;
				int tam=a[1];
				for(int i=1;i<n;i++){
					if(a[i]>a[i+1]) a[i]=a[i]-a[i+1];
					else a[i]=a[i+1]-a[i];
				}
				if(a[n]>tam) a[n]=a[n]-tam;
				else a[n]=tam-a[n];
				int kt2=1;
				for(int i=1;i<n;i++)
					if(a[i]!=a[i+1]){
						kt2=0;
						break;
					}
				if(kt2==1){
					kt=1;
					break;
				}
			}
			if(kt==1) cout<<"Case "<<thutu<<": "<<thu<<" iterations\n";
			if(kt==0) cout<<"Case "<<thutu<<": not attained\n";
		}
	}
}
