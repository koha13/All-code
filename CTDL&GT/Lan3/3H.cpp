#include<bits/stdc++.h>
using namespace std;
main(){
	int st[500],top=0;
	string s;
	while(1){
		cin>>s;
		if(s=="push"){
			int tmp;
			cin>>tmp;
			st[top]=tmp;
			top++;
		}
		else if(s=="pop") top--;
		else if(s=="show"){
			for(int i=0;i<top;i++) cout<<st[i]<<" ";
			cout<<endl;
		}
	}
}
