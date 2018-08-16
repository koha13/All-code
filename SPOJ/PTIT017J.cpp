#include<bits/stdc++.h>
using namespace std;
main(){
	int test;
	cin>>test;
	while(test--){
		long long n,a,b,c,d,e;
		cin>>n>>a>>b>>c>>d>>e;
		cout<<n-(n/a+n/b+n/c+n/d+n/e-n/(a*b)-n/(a*c)-n/(a*d)-n/(a*e)
		-n/(b*c)-n/(b*d)-n/(b*e)-n/(c*d)-n/(c*e)-n/(d*e)+n/(a*b*c)
		+n/(a*b*d)+n/(a*b*e)+n/(a*c*d)+n/(a*c*e)+n/(a*d*e)+n/(b*d*c)
		+n/(e*b*c)+n/(e*d*c)+n/(d*b*e)-n/(a*b*c*d)-n/(a*b*c*e)-n/(a*b*e*d)
		-n/(a*e*c*d)-n/(e*b*c*d)+n/(a*b*c*d*e))<<endl;
	}
}
