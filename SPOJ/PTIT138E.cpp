#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		int a[200]={0};
		int j=0,l=s.length();
		for(int i=s.length()-1;i>=0;i--){
			a[j]=s[i]-'0';
			j++;
		}
		for(int i=0;i<l-1;i++){
			if(a[i]>=10){
				a[i+1]+=1;
				a[i]%=10;
			}
			if(a[i]<5) a[i]=0;
			else{
				a[i]=0;
				a[i+1]++;
			}
		}
		if(a[l-1]>=10){
			a[l-1]=0;
			a[l]=1;
			l++;
		}
		for(int i=l-1;i>=0;i--) cout<<a[i];
		cout<<endl;
	}
}

