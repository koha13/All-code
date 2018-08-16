#include<bits/stdc++.h>
using namespace std;
main(){
	int n,a[100010];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int d1=0,d2=0;
	int i=1,j=n;
	if(n==1) cout<<"1 0";
	else{
		while(i<j){
			if(a[i]==a[j]){
				d1++;
				d2++;
				i++;
				j--;
				if(i==j){
					d1++;
					break;
				}
			}
			else if(a[i]>a[j]){
				a[i]=a[i]-a[j];
				j--;
				d2++;
				if(i==j){
					d1++;
					break;
				}
			}
			else{
				a[j]=a[j]=a[i];
				i++;
				d1++;
				if(i==j){
					d2++;
					break;
				}
			}
		}
		cout<<d1<<" "<<d2;
	}
}
