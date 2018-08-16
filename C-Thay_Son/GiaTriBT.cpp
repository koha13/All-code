#include<stdio.h>

void nhap(int a[], int &n, float &x){
	printf("\nNhap bac da thuc: ");
	scanf("%d", &n);// mac dinh la <= 999
	printf("\nNhap gia tri x = ");
	scanf("%llf", &x);
	
	for(int i = n; i>= 0; i--){
		printf("he so cua x^%d = ", i);
		scanf("%d", &a[i]);
	}
	
}

double kq(int a[], int n, float x){
	double res = 0, value = 1;
	for(int i = 0; i<= n; i++){
		res+= a[i]*value;
		value*= x;// x^i
	}
	
	return res;
}

int main(){
	int a[1000], n; float x;
	nhap(a, n, x);
	printf("KQ = %llf", kq(a, n, x));
	return 0;
}
