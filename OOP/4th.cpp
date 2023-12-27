#include <iostream>

using namespace std;

class Serial{
	
	int serial_no;
	static int count;
	
	public:
	Serial(int s){
	serial_no = s;
	count++;
	}
	
	void show(){
	cout << "I am object " << count << " || " << "My serial_no is: " << serial_no << endl;
	}
};

int Serial::count = 0;

int main(){
	
	Serial obj1(1000);
	obj1.show();
	Serial obj2(1100);
	obj2.show();
	Serial obj3(1200);
	obj3.show();
}
