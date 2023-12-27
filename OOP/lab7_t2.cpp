#include <iostream>

using namespace std;

class Customer{
	protected:
		string name;
		string Acc_no;
	public:
		void in(){
			cout << "Enter Your Name: ";
			cin >> name;
			cout << "Enter Accout no: ";
			cin >> Acc_no;
		}
};
class SBI: public Customer{
	protected:
		string Bank_name;
	public:
		void input(){
			Customer::in();
			cout << "Enter Bank name: ";
			cin >> Bank_name;
		}
		void out(){
			cout << "Customer Details: " << endl;
			cout << "Customer name: " << name << endl;
			cout << "Customer Account number:" << Acc_no << endl;
			cout << "Bank name: " << Bank_name << endl;
		}
};

class Account{
	protected:
		string Acc_title;
		string Acc_Id;
	public:
		void get(){
			cout << "Enter Account Title(current/saving): ";
			cin >> Acc_title;
			cout << "Enter Accout Id: ";
			cin >> Acc_Id;
		}
};

class ICICI : public Account{
	protected:
		int Total_Amount;
	public:
		void get1(){
			Account::get();
			cout << "Amount in Account ";
			cin >> Total_Amount;
		}
		void output(){
			cout << "Account Details: " << endl;
			cout << "Account Title: " << Acc_title << endl;
			cout << "Account Id:" << Acc_Id << endl;
			cout << "Total Amount in Bank: " << Total_Amount << endl;
		}
};

class RBI{
	protected:
		float Interest;
		float Balance;
		int Withdrawal;
	public:
		void condition(){
			cout << "Enter minimum Interest rate: ";
			cin >> Interest;
			if(Interest >= 4){
				Interest = Interest;
			}
			else {
				Interest = 4;
			}
			
			cout << "Enter minimum Balance allowed: ";
			cin >> Balance;
			if(Balance >= 5000){
				Balance = Balance;
			}
			else {
				Balance = 5000;
			}
			
			cout << "Enter maximum withdrawal: ";
			cin >> Withdrawal;
			if(Withdrawal <= 50000){
				Withdrawal = Withdrawal;
			}
			else {
				Withdrawal = 50000;
			}
		}
};

class PNB: public RBI{
	public:
		void get2(){
			RBI::condition();
		}
		void output1(){
			cout << Interest << endl;
			cout << Balance << endl;
			cout << Withdrawal << endl;
		}
};

int main(){
	SBI obj;
	obj.input();
	obj.out();
	
	ICICI obj1;
	obj1.get1();
	obj1.output();

	PNB obj2;
	obj2.get2();
	obj2.output1();
}
