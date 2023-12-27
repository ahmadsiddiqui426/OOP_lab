#include<iostream>
using namespace std;
class Publication{
protected:
string day;
int month;
int year;
public:
void input(){
	cout<<"Enter day:"<<endl;
	cin>>day;
	cout<<"Enter month:"<<endl;
	cin>>month;
	cout<<"Enter year:"<<endl;
	cin>>year;
}	
 };
 class Publication2: public Publication{
    protected:
	int date;
	void in(){
	Publication::input();	
	cout<<"Enter date:"<<endl;
	cin>>date;
	}
};

class Book: public Publication2{
	protected:
	string title;
	public:
	void get(){
	Publication2::in();
	cout<<"Enter title:"<<endl;
	cin>>title;
	
	}
};

class Tape: public Book{
	string color;
	public:
	void enter(){
		Book::get();
		cout<<"Enter colur:"<<endl;
	cin>>color;
	}
	void output(){
		cout<<"Day:"<<day<<endl;
		cout<<"Month:"<<month<<endl;
		cout<<"Year:"<<year<<endl;
		cout<<"Date:"<<date<<endl;
		cout<<"Title:"<<title<<endl;
		cout<<"Color:"<<color<<endl;
	}
};

 int main(){
    Tape obj1;
 	obj1.enter();
 	obj1.output();
 }

