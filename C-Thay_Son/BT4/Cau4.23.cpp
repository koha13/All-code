#include<stdio.h>
main(){
	int m,n,p[100],q[100],c[100];
	scanf("%d",&m); for(int i=m;i>=0;i--) scanf("%d",&p[i]);
	scanf("%d",&n); for(int i=n;i>=0;i--) scanf("%d",&q[i]);
	if(m>n){
		for(int i=0;i<=n;i++) c[i]=p[i]+q[i];
		for(int i=n+1;i<=m;i++) c[i]=p[i];
		for(int i=m;i>=0;i--) printf("%d ",c[i]);
	}
	if(n>m){
		for(int i=0;i<=m;i++) c[i]=p[i]+q[i];
		for(int i=m+1;i<=n;i++) c[i]=q[i];
		for(int i=n;i>=0;i--) printf("%d ",c[i]);
	}
	if(n==m){
		for(int i=0;i<=n;i++) c[i]=p[i]+q[i];
		for(int i=n;i>=0;i--) printf("%d ",c[i]);
	}
	
}
