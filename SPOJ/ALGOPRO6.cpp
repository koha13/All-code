#include<bits/stdc++.h>
using namespace std;
main(){
	int kq;
	int nam; cin>>nam;
	int demnam=0,tmp=nam;
	while(tmp>0){
		demnam+=tmp%10;
		tmp/=10;
	}
	kq=3584+demnam*365;
	if(nam%4==0 && nam%100!=0 || nam%400==0) kq+=demnam+2+2+9;
	cout<<kq;
}

