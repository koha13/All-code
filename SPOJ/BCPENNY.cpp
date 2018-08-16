#include<bits/stdc++.h>
using namespace std;
main(){
	int test,a;
	string s,t;
	cin>>test;
	while(test--){
		int d[10]={0};
		cin>>a; getline(cin,t);
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			string tmp;
			for(int j=i;j<=i+2;j++)
				tmp+=s[j];
				if(tmp=="TTT") d[1]++;
				if(tmp=="TTH") d[2]++;
				if(tmp=="THT") d[3]++;
				if(tmp=="THH") d[4]++;
				if(tmp=="HTT") d[5]++;
				if(tmp=="HTH") d[6]++;
				if(tmp=="HHT") d[7]++;
				if(tmp=="HHH") d[8]++;
		}
		cout<<a<<" ";
		for(int i=1;i<=8;i++) cout<<d[i]<<" ";
		cout<<endl;
	}
}

