#include<iostream>
using namespace std;
class Account{
	protected:
		double sodu;
	public:
		Account(double );
		virtual bool credit();
		virtual bool debit();
		virtual double getBalance(){
			return sodu;
		};
		virtual double calculateInterest(){
		};
		virtual void addInterest(){
		};
};
Account::Account(double k){
	if(k>0) sodu=k;
	else{
		sodu=0;
		cout<<"Gia tri khoi tao khong hop le.\n";
	}
}
bool Account::credit(){
	double t;
	cout<<"Nhap gia tri can them: ";
	cin>>t;
	if(t<0) return false;
	sodu+=t;
	return true;
}
bool Account::debit(){
	double t;
	cout<<"Rut: ";
	cin>>t;
	if(t>sodu){
		cout<<"So tien rut lon hon so du tk.\n";
		return false;
	}
	sodu-=t;
	return true;
}
class SavingsAccount:public Account{
	protected:
		double lai;
	public:
		SavingsAccount(double , double);
		double calculateInterest();
		void addInterest();
};
SavingsAccount::SavingsAccount(double a, double b):Account(a){
	lai=b;
}
double SavingsAccount::calculateInterest(){
	return (lai*sodu);
}
void SavingsAccount::addInterest(){
	sodu+=sodu*lai;
}
class CheckingAccount:public Account{
	protected:
		double phi;
	public:
		CheckingAccount(double, double);
		bool credit();
		bool debit();
};
CheckingAccount::CheckingAccount(double a, double b):Account(a){

	phi=b;
}
bool CheckingAccount::credit(){
	Account::credit();
	sodu-=phi;
	return true;
}
bool CheckingAccount::debit(){
	if(Account::debit()) sodu-=phi;
	return true;
}
main(){
	Account *p;
	CheckingAccount o(15000,0.5);
	p=&o;
	p->credit();
	cout<<p->getBalance();
}
