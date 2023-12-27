#include <iostream>
using namespace std;
class Account{
	string name;
	int acc_No;
	string a_type;
	double bal;
	
	public:
		
    Account(){
    	
	}
	Account(string n,int a,string t,float b){
	name=n;
	acc_No=a;
	a_type=t;
	bal=b;	
	}
	
	void deposit(){
	int d_amt;
    cout<<"Enter deposit amount:"<<endl;
    cin>>d_amt;
    bal+=d_amt;
	}
	
	void withdraw(){
	int w_amt;
	cout<<"Enter withdraw amount:"<<endl;
	cin>>w_amt;
	bal-=w_amt;
	}
	
	Account display(){
	cout<<"Name:"<<name<<endl;
	cout<<"Account No:"<<acc_No<<endl;
	cout<<"Account Type:"<<a_type<<endl;
	cout<<"Balance:"<<bal<<endl;
	}
	
	Account operator +(const Account obj){
	Account temp;
	temp.bal=bal+obj.bal;
	return temp;
	}
	
	
};
int main(){
	string name;
	int a_No;
	string a_type;
	float bal;
	cout<<"Enter details:"<<endl;
	cout<<"--------------"<<endl;
	
	cout<<"Enter name:"<<endl;
	cin>>name;
	
	cout<<"Enter account No:"<<endl;
	cin>>a_No;
	
	cout<<"Enter account type:"<<endl;
	cin>>a_type;
	
	cout<<"Enter balance:"<<endl;
	cin>>bal;
	
	Account a1(name,a_No,a_type,bal),a2("Ahmad",0234,"current",23000),a3;
	a3=a1+a2;
	a3.display();
	a1.deposit();
	a1.withdraw();
	a1.display();
	return 0;
}
