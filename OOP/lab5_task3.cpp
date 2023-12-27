#include<iostream>
using namespace std;
class Demo{
	int x;
	public:
	Demo(){
		
	}
	
	Demo(int a){
	x=a;	
	}
	
	Demo operator ++(int){
	x++;
	}
	void show(){
		cout<<"X:"<<x;
	}
	
};

int main(){
	Demo obj(3);
	obj++;
	obj.show();
	
	return 0;
}
