#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	int dem=0;
	for(int i=0;i<n;i++){
		int a,b;
		a=s1[i]-48;
		b=s2[i]-48;
		if(a<b){
			int tg=a;
			a=b;
			b=tg;
		}
		if(a-b<10+b-a) dem+=a-b;
		else dem+=10+b-a;
	}
	cout<<dem;
}

