#include<bits/stdc++.h>
using namespace std;
struct matrix{
	long long bac;
	long long a[11][11];
};
matrix multi(matrix m1, matrix m2){
	matrix kq;
	for(int i=1;i<=10;i++)
		for(int j=1;j<=10;j++) kq.a[i][j]=0;
	kq.bac=m1.bac;
	for(int i=1;i<=kq.bac;i++){
		for(int j=1;j<=kq.bac;j++){
			for(int k=1;k<=kq.bac;k++)
				kq.a[i][j]+=m1.a[i][k]*m2.a[k][j];
			kq.a[i][j]=kq.a[i][j]%1000000007;
		}
	}
	return kq;
}
matrix power(matrix a, long long n){
	if(n==1) return a;
	matrix tmp=power(a,n/2);
	matrix kq=multi(tmp,tmp);
	if(n%2==1) kq=multi(kq,a);
	return kq;
}
main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		matrix t;
		cin>>t.bac>>n;
		for(int i=1;i<=t.bac;i++)
			for(int j=1;j<=t.bac;j++) cin>>t.a[i][j];
		matrix kq=power(t,n);
		for(int i=1;i<=kq.bac;i++){
			for(int j=1;j<=kq.bac;j++) cout<<kq.a[i][j]<<" ";
			cout<<endl;
		}
	}
}

