#include<stdio.h>
#include<math.h>
void cvd(float [20][20], int [20][20], int);
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
void nd(int a[20][20],int n){
	float c[20][20];
	for(int p=0;p<n;p++)
		for(int q=0;q<n;q++){
			int b[20][20];
			for(int i=0;i<n;i++)
			for(int j=0;j<n;j++){
				if(i<p&&j<q) b[i][j]=a[i][j];
				if(i<p&&j>q) b[i][j-1]=a[i][j];
				if(i>p&&j<q) b[i-1][j]=a[i][j];
				if(i>p&&j>q) b[i-1][j-1]=a[i][j];
			}
			c[p][q]=pow(-1,p+q)*deti(b,n-1);
		}
		cvd(c,a,n);
		
}
void cvd(float c[20][20],int a[20][20],int n){
	float d[20][20];
	long long det=deti(a,n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		d[i][j]=c[j][i];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		printf("%.2f ",d[i][j]/det);
		printf("\n");
	}
}
main(){
	int a[20][20],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	nd(a,n);
}
