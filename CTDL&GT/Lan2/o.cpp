#include<bits/stdc++.h>
using namespace std;
char s1[15],s2[15];
void xuly1(){
	char x1[25],x2[25];
	strcpy(x1,s1);
	strcpy(x2,s2);
	for(int i=0;i<strlen(x1);i++) if(x1[i]-48==6) x1[i]='5';
	for(int i=0;i<strlen(x2);i++) if(x2[i]-48==6) x2[i]='5';
	int x,y;
	x=atoi(x1);
	y=atoi(x2);
	cout<<x+y;
}
void xuly2(){
	char x1[25],x2[25];
	strcpy(x1,s1);
	strcpy(x2,s2);
	for(int i=0;i<strlen(x1);i++) if(x1[i]=='5') x1[i]='6';
	for(int i=0;i<strlen(x2);i++) if(x2[i]=='5') x2[i]='6';
	int x,y;
	x=atoi(x1);
	y=atoi(x2);
	cout<<x+y;
}
main(){
	int a,b;
	cin>>a>>b;

	itoa(a,s1,10);
	itoa(b,s2,10);
	xuly1();
	cout<<" ";
	xuly2();
}

