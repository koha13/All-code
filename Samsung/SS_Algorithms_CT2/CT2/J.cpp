#include <stdio.h>
#define N 1000000007
long long _Slove(int n, int k);
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n , k;
		scanf("%d%d",&n,&k);
		printf("%lld\n",_Slove(n,k));
	}
}
 long long _Slove(int n , int k ){
		long long a[1001] ;
		int i, j ,na =2;;
		a[0] =1;
		a[1] =1;
		long long Remember1,Remember2;
		for(i = 1 ; i < n ; i++){
				Remember1 =1;
				for(j = 1 ; j < na ; j++ ){
					Remember2 = a[j];
					a[j] = Remember2 + Remember1 ;
					a[j] %= N;
					Remember1 = Remember2;
				}
				a[na++]=1;
		}
	//	for(i = 0 ; i < na ; i++) printf("%lld ",a[i]);
		return a[k];
}
