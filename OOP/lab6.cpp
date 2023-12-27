#include<iostream>
using namespace std;
class Publication{
	protected:
	string title;
	float price;
	public:
	Publication(){
		
	}
	
	Publication(string t,float p){
	title=t;
	price=p;	
	}
	
};

class Book: public Publication{
	int count;
	float tape;
	public:
	
	
	void getdata(string t,float p,int c,float t1){
	count=c;
	tape=t1;	
	}
	
	void putdata(){
		
	}
	
	void show(){
	cout<<"Title"<<title<<endl<<"Price"<<price<<endl<<"Count"<<count<<endl<<"Tape"<<tape<<endl;
	}
	
};

int main(){
	Book p1;
	p1.getdata("Julia and the Angel",23.4,22,12.4);
	p1.show();
	
	return 0;
}
