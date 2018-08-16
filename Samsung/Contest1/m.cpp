#include<bits/stdc++.h>
using namespace std;
int sosanh(char s[], char n[]){
	if(strlen(s)>strlen(n)) return 1;
	if(strlen(s)<strlen(n)) return 2;
	for(long long i=0;i<strlen(n);i++){
		if(s[i]<n[i]) return 2;
		if(s[i]>n[i]) return 1;
	}
	return 3;
}
main(){
	int t;
	cin>>t;
	while(t--){
		char n[30];
		cin>>n;
		long long i=1,dem=0;
		while(1){
			char s[30];
			itoa(i,s,2);
			if(sosanh(s,n)==1) break;
			i++;
			dem++;
		}
		cout<<dem<<endl;;
	}
}
