#include<bits/stdc++.h>
using namespace std;
main(){
	int R,C,A,B;
	cin>>R>>C;
	string t; getline(cin,t);
	char a[205][205];
	for(int i=1;i<=R;i++){
		string s;
		getline(cin,s);
		int j=1;
		for(int k=0;k<s.length();k++){
			a[i][j]=s[k];
			j++;
		}
	}
	cin>>A>>B;
	for(int i=1;i<=R;i++){
		int dau=1,duoi=2*C;
		while(dau<duoi){
			a[i][duoi]=a[i][dau];
			duoi--;
			dau++;
		}	
	}
	for(int i=1;i<=2*C;i++){
		int dau=1,duoi=2*R;
		while(dau<duoi){
			a[duoi][i]=a[dau][i];
			duoi--;
			dau++;
		}
	}
	if(a[A][B]=='.') a[A][B]='#';
	else a[A][B]='.';
	for(int i=1;i<=2*R;i++){
		for(int j=1;j<=2*C;j++)
			cout<<a[i][j];
		cout<<endl;
	}
}

