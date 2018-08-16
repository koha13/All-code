#include<stdio.h>
#include<math.h>
long long deti(int a[20][20], int n){
	long long det=0,s;
	if(n==1) return a[0][0];
	if( n == 2 ) return ( a[0][0]*a[1][1] 
		- a[0][1]*a[1][0]) ;
	for(int k=0;k<n;k++){
		int b[20][20];
		for(int i=0;i<n;i++)
			for(int j=1;j<n;j++){
			if(i<k) b[i][j-1]=a[i][j];
			if(i>k) b[i-1][j-1]=a[i][j];}
		if(k%2==0) s=1;
		else s=-1;
		det=det+s*a[k][0]*deti(b,n-1);
	}
	return det;
}
main(){
	int a[20][20],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	printf("%d",deti(a,n));
}
