#include<bits/stdc++.h>
using namespace std;
int n;
char a[50][50];
char xuly(){
	for(int i=2;i<n+2;i++)
		for(int j=2;j<n+2;j++)
			if(a[i][j]!='.'){
				if(a[i][j]==a[i][j+1] && a[i][j+1]==a[i][j+2]) return a[i][j];
				if(a[i][j]==a[i+1][j] && a[i+1][j]==a[i+2][j]) return a[i][j];
				if(a[i][j]==a[i+1][j+1] && a[i][j]==a[i+2][j+2]) return a[i][j];
				if(a[i][j]==a[i+1][j-1] && a[i][j]==a[i+2][j-2]) return a[i][j];
			}
	return '.';
		
}
main(){
	for(int i=0;i<50;i++)
		for(int j=0;j<50;j++) a[i][j]='.';
	cin>>n;
	char t[5]; gets(t);
	for(int i=2;i<n+2;i++){
		char s[100];
		gets(s);
		int j=2;
		for(int k=0;k<strlen(s);k++){
			a[i][j]=s[k];
			j++;
		}
	}
	char kq=xuly();
	if(kq=='.') cout<<"ongoing";
	else cout<<kq;
}

