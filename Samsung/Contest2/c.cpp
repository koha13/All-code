#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	int m[26][26],mark[100];
	cin>>s;
	int dem=0;
	for(int i=0;i<s.length();i++){
		if(mark[i]!=1){
			int j=i+1;
			int a[27]={0};
			while(s[j]!=s[i] && j<s.length()){
				a[int(s[j]-'A')]++;
				j++;
			}
			for(int t=0;t<26;t++) if(a[t]==1 && m[s[i]-'A'][t]!=1){
				dem++;
				m[s[i]-'A'][t]=1;
				m[t][s[i]-'A']=1;
			}
			mark[j]=1;
		}
	}
	cout<<dem;
}
