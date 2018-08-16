#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
void xuly1(){
	if(c-b==d-c){
		int k=c-b;
		a=b-k;
		if(a<=10000&&a>=1) cout<<a<<endl;
		else cout<<-1<<endl;
	}
	else if(c/b==d/c){
		int k=c/b;
		a=b/k;
		if(a<=10000&&a>=1) cout<<a<<endl;
		else cout<<-1<<endl;
	}
	else cout<<-1<<endl;
}
void xuly2(){
	if(d-c==(c-a)/2){
		int k=d-c;
		int b=c-k;
		if(b<=10000&&b>=1) cout<<b<<endl;
		else cout<<-1<<endl;
	}
	else if(d/c==sqrt(c/a)){
		int k=d/c;
		int b=c/k;
		if(b<=10000&&b>=1) cout<<b<<endl;
		else cout<<-1<<endl;
	}
	else cout<<-1<<endl;
}
void xuly3(){
	if(b-a==(d-b)/2){
		int k=b-a;
		c=d-k;
		if(c<=10000&&c>=1) cout<<c<<endl;
		else cout<<-1<<endl;
	}
	else if(b/a==sqrt(d/b)){
		int k=b/a;
		c=d/k;
		if(c<=10000&&c>=1) cout<<c<<endl;
		else cout<<-1<<endl;
	}
	else cout<<-1<<endl;
}
void xuly4(){
	if(b-a==c-b){
		int k=b-a;
		d=c+k;
		if(d<=10000&&d>=1) cout<<d<<endl;
		else cout<<-1<<endl;
	}
	if(a!=0){
		if(b/a==c/b){
			int k=b/a;
			d=c*k;
			if(d<=10000&&d>=1) cout<<d<<endl;
			else cout<<-1<<endl;
		}
		else cout<<-1<<endl;
	}
}
main(){
	while(1){
		cin>>a>>b>>c>>d;
		if(a==-1 && b==-1 && c==-1 && d==-1) break;
		if(a==-1) xuly1();
		else if(b==-1) xuly2();
		else if(c==-1) xuly3();
		else xuly4();
		
	}
}

