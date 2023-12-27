#include<iostream>
using namespace std;
class Account{
	string name;
	int a_No;
	string a_type;
	float bal;
	
	public:
	Account(string n,int a,string t,float b){
	name=n;
	a_No=a;
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
	
	void display(){
	cout<<"Name:"<<name<<endl;
	cout<<"Account No:"<<a_No<<endl;
	cout<<"Account Type:"<<a_type<<endl;
	cout<<"Balance:"<<bal<<endl;
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
	
	Account a1(name,a_No,a_type,bal);
	a1.deposit();
	a1.withdraw();
	a1.display();
	return 0;
		
}
