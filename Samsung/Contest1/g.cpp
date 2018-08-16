#include<bits/stdc++.h>
using namespace std;
struct cv{
	int dau,cuoi;
};
int cmp(cv a, cv b){
	return a.cuoi<b.cuoi;
}
main(){
	int test;
	cin>>test;
	cv a[100001];
	while(test--){
		int q;
		cin>>q;

		for(int i=1;i<=q;i++)
			cin>>a[i].dau>>a[i].cuoi;
		sort(a+1,a+1+q,cmp);
		int dem=1,t=1;
		for(int i=2;i<=q;i++)
			if(a[i].dau>=a[t].cuoi){
				dem++;
				t=i;
			}
		cout<<dem<<endl;
	}
}
