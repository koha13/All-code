#include<bits/stdc++.h>
using namespace std;
double smax(double a,double b){
	if(a>b) return a;
	return b;
}
main(){
	int test;
	cin>>test;
	for(int t=1;t<=test;t++){
		double n,V,X;
		cin>>n>>V>>X;
		if(n==1){
			double R,C;
			cin>>R>>C;
			cout<<"Case #"<<t<<": ";
			if(C==X) cout<<setprecision(3)<<fixed<<V/R;
			else cout<<"IMPOSSIBLE";
		}
		else{
			double R1,R2,C1,C2;
			cin>>R1>>C1>>R2>>C2;
			cout<<"Case #"<<t<<": ";
			if((C1<X && C2<X) || ( C1>X && C2>X)) cout<<"IMPOSSIBLE";
			else if(C1==X && C2!=X) cout<<setprecision(3)<<fixed<<V/R1;
			else if(C1!=X && C2==X) cout<<setprecision(3)<<fixed<<V/R2;
			else if(C1==X && C2==X) cout<<setprecision(3)<<fixed<<V/(R1+R2);
			else{
				double v1,v2;
				v1=((double)V*X-C2*V)/((double)C1-C2);
				v2=V-v1;
				double tmp=smax((double)v1/R1,(double)v2/R2);
				cout<<setprecision(3)<<fixed<<tmp;
			}
		}
		cout<<endl;
	}
	
}
