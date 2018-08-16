#include<stdio.h>
#include<string.h>
char c[1001], tong1[1001], tong[1001];
void tinhtong(char A[1000], char B[1000]){
	char a[1000],b[1000],nho=0,tam;
	int n;  int m;
	strcpy(a,A); strcpy(b,B);
	if(m>n){
		char tg[1000];
		strcpy(tg,a);
		strcpy(a,b);
		strcpy(b,tg);
	}
	strrev(a); strrev(b);
	n=strlen(a); m=strlen(b);
	for(int i=0;i<n-m+1;i++) strcat(b,"0");
	strcat(a,"0");
	for(int i=0;i<=n;i++){
		tam=tong1[i]-48+a[i]+b[i]-96+nho;
		nho=tam/10;
		tam=tam%10;
		tong1[i]=tam+48;
	}
	if(tong1[n]=='0') tong1[n]='\0';
	else tong1[n+1]='\0';
}
void nhan1so(char A[1000],int n){
	int nho=0;
	char a[1000]; strcpy(a,A);
	int m;
	strrev(a);
	m=strlen(a); strcat(a,"0");
	for(int i=0;i<=m;i++){
		int tam=(a[i]-48)*n+nho;
		nho=tam/10;
		tam=tam%10;
		c[i]=tam+48;
	}
	if(c[n]==48) c[n]='\0';
	else c[n+1]='\0';
	strrev(c);
}
void tinhtich(char A[1000], char B[1000]){
	int m=strlen(B);
	for(int i=m-1;i>=0;i--){
		nhan1so(A,B[i]-48);
		tinhtong(tong1,c);
	}
	printf("%s",strrev(tong1));
}
main(){
	char A[1000],B[1000];
	gets(A); gets(B);
	tinhtich(A,B);
}
