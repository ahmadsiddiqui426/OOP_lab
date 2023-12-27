#include<iostream>
using namespace std;
class Employee{
string name;
int year_of_joining;
int salary;
string address;
public:
Employee()
{
	
}

Employee(string n,int y,int s,string a)
{
name=n;
year_of_joining=y;
salary=s;
address=a;	
}
/*
void setName(string n)
{
name=n;	
}

void setYear_of_Joining(int y)
{
	year_of_joining=y;
}

void setSalary(int s)
{
	salary=s;
}

void setAddress(string a)
{
	address=a;
}

string getName()
{
	return name;
}

int getYear_of_Joining()
{
	return year_of_joining;
}

int getSalary()
{
	return salary;
}

string getAddress()
{
	return address;
}*/

void print(){
	cout<<name<<"\t\t"<<year_of_joining<<"\t\t"<<salary<<address<<endl;
}

void show(){
	cout<<"Name\t\t"<<"Year of joining\t\t"<<"Salary\t\t"<<"Address\t\n";
}
};

int main(){
Employee obj;
Employee obj1("Robert\t",1994,40000,"\t\t64C- WallsStreat\t");
Employee obj2("Sam\t",2000,35000,"\t\t68D- WallsStreat\t");
Employee obj3("John\t",1999,30000,"\t\t26B- WallsStreat\t");
obj.show();
obj1.print();
obj2.print();
obj3.print();
return 0;	
}
