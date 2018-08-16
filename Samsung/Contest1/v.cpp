#include<bits/stdc++.h>
using namespace std;
struct khoa{
	int a[7],dem;
};
int cuoi[7];
bool ktra(khoa k){
	for(int i=1;i<=6;i++)
		if(k.a[i]!=cuoi[i]) return false;
	return true;
}
int main(){
	khoa dau;
	queue<khoa> q;
	for(int i=1;i<=6;i++) cin>>dau.a[i];
	for(int i=1;i<=6;i++) cin>>cuoi[i];
	dau.dem=0;
	q.push(dau);
	int dem=0;
	while(!q.empty()){
		khoa top=q.front();
		q.pop();
		if(ktra(top)){
			cout<<top.dem;
			return 0;
		};
		khoa t1,t2;
		t1.dem=t2.dem=top.dem+1;
		t1.a[1]=top.a[4];
		t1.a[2]=top.a[1];
		t1.a[3]=top.a[3];
		t1.a[4]=top.a[5];
		t1.a[5]=top.a[2];
		t1.a[6]=top.a[6];
		t2.a[1]=top.a[1];
		t2.a[2]=top.a[5];
		t2.a[3]=top.a[2];
		t2.a[4]=top.a[4];
		t2.a[5]=top.a[6];
		t2.a[6]=top.a[3];
		q.push(t1);
		q.push(t2);
	}
}
