#include<bits/stdc++.h>
using namespace std;
string doi(int a){
	string kq; for(int i=0;i<5;i++) kq[i]='0';
	string s;
	int d=0;
	while(a>0){
		s[d]=a%2+'0';
		a/2;
		d++;
	}
	s.reverse_iterator;
	int dem=4;
	for(int i=d-1;i>=0;i--){
		kq[dem]=s[d];
		dem--;
	}
	return kq;
}
main(){
	int test,cot,hang,a[30];
	cin>>test;
	string s;
	while(test--){
		cin>>hang>>cot>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]==' ') a[i]=0;
			else a[i]=s[i]-64;
		}
		string s[100];
		for(int i=0;i<s.length();i++)
			s[i]=doi(a[i]);
		cout<<c[1];
	}
}
