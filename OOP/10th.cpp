#include <iostream>
using namespace std;

class Travel
{
	int kilometers;
	int hours;
	public:	
	Travel(){
	kilometers=0;
	hours=0;
	}
	void input_km(int v);
	void input_H(int h);
	void print();	
	Travel operator +(const Travel &obj){
	Travel temp;
	temp.kilometers=kilometers+obj.kilometers;
	temp.hours=hours+obj.hours;
	return temp;
	}
};

void Travel::input_km(int k)
{
	kilometers=k;
}
void Travel::input_H(int h)
{
	hours=h;
}

void Travel::print()
{
	cout<<"Killometers: "<<kilometers <<endl;
	cout<<"Hours: " << hours << endl;
}
	
int main()
{
	
	Travel t1;
	t1.input_km(50);
	t1.input_H(2);
	Travel t2;
	t2.input_km(25);
	t2.input_H(1);
	
	Travel result;
	result =t1+t2;
	
	result.print();
	
	return 0;
}
