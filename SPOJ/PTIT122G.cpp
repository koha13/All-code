#include<bits/stdc++.h>
using namespace std;
char s[20];
int a[20];
int kq;
void xx(){
	for(int i=0;i<strlen(s);i++)
		a[i]=s[i]-48;
}
bool kt(){
	int i=0,j=strlen(s)-1;
	while(i<j){
		if(a[i]!=a[j]) return false;
		i++;j--;
	}
	return true;
}
void xuly(){
	int l=strlen(s);
	int i=0,j=l-1;
	while(i<j){
		if(a[i]>a[j]){
			a[j]=a[i];
		}
		else if(a[i]<a[j]){
			a[j]=a[i];
			a[j-1]++;
			int k=1;
			while(a[j-k]>9){
				a[j-k]%=10;
				a[j-k-1]++;
				k++;
			}
		}
		i++; j--;
	}
}
int doi(){
	int so=1,kq=0;
	for(int i=strlen(s)-1;i>=0;i++){
		kq+=a[i]*so;
		so*=10;
	}
}
main(){
	while(1){
		cin>>s;
		kq=0;
		if(strcmp(s," ")==0) break;
		xx();
		int a=doi();
		while(!kt()){
			xuly();
		}
		int a1=doi();
		cout<<s<<endl<<a1-a<<endl;
	}
}
