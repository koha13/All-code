#include<bits/stdc++.h>
using namespace std;
struct dt{
	int bac,heso;
};
main(){
	int test;
	cin>>test;
	char t[5]; gets(t);
	while(test--){
		char a[200],b[200];
		gets(a); gets(b);
		stack<dt> s1,s2;
		dt tmp;
		char *p=strtok(a,"*x^ +");
		while(p!=NULL){
			tmp.heso=atoi(p);
			p=strtok(NULL,"*x^ +"); tmp.bac=atoi(p);
			s1.push(tmp);
			p=strtok(NULL,"*x^ +");
		}
		char *q=strtok(b,"*x^ +");
		while(q!=NULL){
			tmp.heso=atoi(q);
			q=strtok(NULL,"*x^ +"); tmp.bac=atoi(q);
			s2.push(tmp);
			q=strtok(NULL,"*x^ +");
		}
		stack<dt> kq;
		while(!s1.empty() && !s2.empty()){
			dt t1,t2;
			t1=s1.top(); t2=s2.top();
			if(t1.bac==t2.bac){
				tmp.bac=t1.bac; tmp.heso=t1.heso+t2.heso; kq.push(tmp);
				s1.pop(); s2.pop();
			}
			else if(t1.bac<t2.bac){
				tmp.bac=t1.bac; tmp.heso=t1.heso; kq.push(tmp);
				s1.pop();
			}
			else{
				tmp.bac=t2.bac; tmp.heso=t2.heso; kq.push(tmp);
				s2.pop();
			}
		}
		while(!s1.empty()){
			tmp=s1.top();
			kq.push(tmp); s1.pop();
		}
		while(!s2.empty()){
			tmp=s2.top();
			kq.push(tmp); s2.pop();
		}
		tmp=kq.top(); kq.pop();
		cout<<tmp.heso<<"*x^"<<tmp.bac;
		while(!kq.empty()){
			tmp=kq.top(); kq.pop();
			cout<<" + "<<tmp.heso<<"*x^"<<tmp.bac;
		}
		cout<<endl;
	}
}
