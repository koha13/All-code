#include<bits/stdc++.h>
using namespace std;
main(){
	long long d1,d2,d3;
	cin>>d1>>d2>>d3;
	long long a,b,c,d;
	a=d1+d2+d3;
	b=d1+d3+d3+d1;
	c=d1+d1+d2+d2;
	d=d2+d3+d3+d2;
	long long smin=a;
	if(smin>a) smin=a;
	if(smin>b) smin=b;
	if(smin>c) smin=c;
	if(smin>d) smin=d;
	cout<<smin;
}

