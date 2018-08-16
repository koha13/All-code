#include<stdio.h>
#include<conio.h>
#include<string.h>
void cong(char a[],char b[])
{
	char tong[1000],a1[1000],b1[1000];
	int t,nho=0,n,m;
	strcpy(a1,a); strcpy(b1,b);
	strrev(a); strrev(b);
	n=strlen(a); m=strlen(b);
	strcat(a,"0");
	for (int i=0;i<n-m+1;i++) strcat(b,"0");
	for(int i=0;i<=n;i++)
	{
		t=a[i]-'0'+b[i]-'0'+nho;
		nho=t/10;
		t=t%10;
		tong[i]=t+'0';
	}
	if(tong[n]=='0') tong[n]='\0';
	else tong[n+1]='\0';
	strrev(tong);
	printf("\nTong %s + %s= %s",a,b,tong);
}
main()
{
	char a[1000],b[1000];
	printf("Nhap xau a: ");gets(a);
	printf("Nhap xau b: ");gets(b);
	if(strlen(a)>strlen(b)) cong(a,b);
	else cong(b,a);
	getch();
}
