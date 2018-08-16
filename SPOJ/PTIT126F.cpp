#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	int rmax,rmin,lmax,lmin,smax=0;
	rmax=rmin=lmax=lmin=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='L'){
			lmax++;
			lmin++;
			if(lmax-rmin>smax) smax=lmax-rmin;
		}
		else if(s[i]=='R'){
			rmax++;
			rmin++;
			if(rmax-lmin>smax) smax=rmax-lmin;
		}
		else{
			lmax++;
			if(lmax-rmin>smax) smax=lmax-rmin;
			rmax++;
			if(rmax-lmin>smax) smax=rmax-lmin;
		}
	}
	cout<<smax;
}
