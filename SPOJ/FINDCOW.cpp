#include<bits/stdc++.h>
using namespace std;
main(){
	string a;
	cin>>a;
	int dem=0,kq=0;
	for(int i=0;i<a.length()-1;i++)
		if(a[i]==')' && a[i+1]==')') dem++;
	for(int i=0;i<a.length()-1;i++){
		if(a[i]=='(' && a[i+1]=='(') kq+=dem;
		if(a[i]==')' && a[i+1]==')') dem--;
	}
	cout<<kq;
}

