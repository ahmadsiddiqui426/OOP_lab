#include<iostream>
using namespace std;
class Complex{
	float real;
	float img;
	public:
	Complex(){
		
	}
	Complex(float r,float i){
	real=r;
	img=i;
	}
	
	Complex operator +(const Complex &obj){
	Complex temp;
	temp.real=real+obj.real;
	temp.img=img+obj.img;
	return temp;
	}
	 
	void show(){
	cout<<"Real: "<<real<<"\n"<<"IMAGINARY: "<<img<<"\n"<<endl;
	}
	 
};
int main(){
	Complex obj1(9.3,3.4);
	Complex obj2(8.3,4.5);
	Complex result;
	result =obj1+obj2;
	result.show();
	return 0;
}
