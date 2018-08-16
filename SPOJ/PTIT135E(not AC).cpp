#include<bits/stdc++.h>
using namespace std;
string s;
vector<string> v;
int n=0,a[22];
bool kiemtra(int i){
	for(int j=0;j<i;j++){
		if(v[j]==v[i]) return false;
	}
	return true;
}
bool toan0(){
	for(int i=1;i<=n;i++)
		if(a[i]==1) return true;
	return false;
}
bool toan1(){
	for(int i=1;i<=n;i++)
		if(a[i]==0) return true;
	return false;
}
void xuly(){
	int  b[11];
	string z;
	int dong=1;
	for(int i=1;i<s.length();i++){
		if(s[i]==')'){
			int tmp=1,tmp1=0;
			for(int k=i-1;k>=1;k--){
				if(s[k]=='(') tmp--;
				else if(s[k]==')') tmp++;
				if(tmp==0){
					for(int q=1;q<=k;q++) if(s[q]=='(') tmp1++;
					b[dong]=a[tmp1];
					dong++;
					break;
				}
			}
		}
		
	}
//	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
//	for(int i=1;i<=n;i++) cout<<b[i]<<" ";
//	cout<<endl;
	int kt=0;
	if(toan0() && toan1()) kt=1;
	if(kt==1){
		int dem=1,dong=1;
		for(int i=1;i<s.length();i++){
			if(s[i]=='('){
				if(a[dem]==0) z=z+s[i];
				dem++;
			}
			else if(s[i]==')'){
				if(b[dong]==0) z=z+s[i];
				dong++;
			}
			else z=z+s[i];
		}
		v.push_back(z);
	}
	
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			xuly();
		}
		else Try(i+1);
	}
}
main(){
	cin>>s;
	s="0"+s;
	for(int i=1;i<s.length();i++) if(s[i]=='(') n++;
	Try(1);
	for(int i=0;i<v.size();i++){
		if(kiemtra(i)) cout<<v[i]<<endl;
	}
	for(int i=1;i<s.length();i++){
		if(s[i]!='(' && s[i]!=')') cout<<s[i];
	}
}

