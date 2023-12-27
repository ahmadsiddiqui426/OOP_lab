#include<iostream>
using namespace std;
class Demo{
	int value;
	public:
	Demo(){
	value=5;
	}
	
	void operator ++(int){ //postfix increment
	value++;
	}
	
	void operator ++(){ //prefix increment
	++value;
	}
	
	void operator --(int){ //postfix decrement
	value--;	
	}
	
	void operator --(){ //prefix decrement
	--value;	
	}
	
	void show(){ 	
	cout<<"Value:"<<value<<endl;
	}
	};

int main(){
	Demo obj1;
	obj1++;
	obj1.show();
	
	++obj1;
	obj1.show();
	
	obj1--;
	obj1.show();
	
	--obj1;
	obj1.show();

	return 0;
}
