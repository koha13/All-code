#include<bits/stdc++.h>
using namespace std;
char* nhan(char s[], char a[]){
	strrev(s);
	strrev(a);
	int size=strlen(s)+strlen(a);
	char kq[1000000];
	for(int i=0;i<strlen(s);i++)
		for(int j=0;j<strlen(a);j++)
			kq[i+j]+=s[i]*a[j];
	for(int i=0;i<size;i++)
		if(kq[i]>=10){
			kq[i+1]+=kq[i]/10;
			kq[i]%=10;
		}
	if(kq[size-1]==0) size--;
	return kq;
}
main(){
	int test;
	cin>>test;
	while(test--){
		int n,x,dem=0;
		cin>>n>>x;
		char s[10000000000],a[1000];
		for(int i=1;i<=n;i++){
			itoa(i,a,10);
			strcpy(s,nhan(s,a));
		}
		for(int i=0;i<strlen(s);i++)
			if(s[i]==x+'0') dem++;
	}
}

