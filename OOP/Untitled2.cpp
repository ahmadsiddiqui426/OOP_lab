#include<iostream>
using namespace std;
class Complex{
	float real;
	float img;
	public:
	Complex(){
	
	}
	Complex(float x,float y){
		real=x;
		img=y;
	}
	Complex operator +(const Complex &obj){
		Complex temp;
		temp.real=this->real+obj.real;
		temp.img=this->img+obj.img;
		return temp;
		
	}
	void show(){
	cout << real<<"\n"<<img<<endl;	
	}
	
};
int main(){
	Complex obj1(3.1,3.8),obj2(0.9,6.2);	
	Complex result;
	result=obj1+obj2;
	result.show();
	return 0;
}
