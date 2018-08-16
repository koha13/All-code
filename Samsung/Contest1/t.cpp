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
		cin>>n;
		matrix t;
		t.bac=2;
		t.a[1][1]=0; t.a[1][2]=1;
		t.a[2][1]=1; t.a[2][2]=1;
		matrix kq=power(t,n-1);
		cout<<kq.a[2][2]<<endl;
	}
}

