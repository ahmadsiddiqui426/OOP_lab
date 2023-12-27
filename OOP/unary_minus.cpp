#include<iostream>
using namespace std;
class Demo{
	int a,b;
	public:
	Demo(int x,int y){
	a=x;
	b=y;	
	}
	
	Demo operator -();
	void show();
};

Demo Demo::operator -(){ //unary minus operator
	a=-a;
	b=-b;
	return Demo(a,b);	
	}
	
void Demo::show(){
	{
	cout<<"A:"<<a<<"\n"<<"B:"<<b<<endl;
	}
}

int main(){
	Demo obj1(3,-2),obj2(4,-8);
	-obj1;
	obj1.show();
	-obj2;
	obj2.show();
	return 0;
}
