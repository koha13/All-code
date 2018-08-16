#include<iostream>
#include<ctime>
#include<cstring>;
using namespace std;
main(){
	time_t t=time(NULL);
	char* chartime; chartime=ctime(&t);
	cout<<chartime;
}
