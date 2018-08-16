#include<bits/stdc++.h>
using namespace std;
struct point{
	double x,y;
};
double a[105][105],n;
void PRIM(int u){
	double vt[105], d[105]; int t[105];
	for(int i=1;i<=n;i++){
		vt[i]=0; d[i]=a[u][i]; t[i]=u;
	}
	vt[u]=1; d[u]=0; t[u]=0;
	double wt=0;
	int m=1;
	while(m<n){
		int v=0; double min=99999999;
		for(int i=1;i<=n;i++)
			if(vt[i]==0 && d[i]<min){
				min=d[i];
				v=i;
			}
		vt[v]= 1; wt= wt + a[v][t[v]];
		for(int i=1;i<=n;i++)
			if(vt[i]==0 && d[i]>a[v][i]){
				d[i]= a[v][i]; t[i]= v;
			}
		m++;
	}
	cout <<setprecision(6)<<fixed<< wt << endl;
}

main(){
	int test;
	cin>>test;
	while(test--){
		cin>>n;
		point v[105];
		for(int i=1;i<=n;i++){
			cin>>v[i].x>>v[i].y;
		}
		for(int i=1;i<=n;i++)
			for(int j=i;j<=n;j++){
				if(i==j){
					a[i][j]=a[j][i]=0;
					continue;
				}
				double tmp=sqrt((v[i].x-v[j].x)*(v[i].x-v[j].x)+(v[i].y-v[j].y)*(v[i].y-v[j].y));
				a[i][j]=a[j][i]=tmp;
			}
		PRIM(1);
	}
}
