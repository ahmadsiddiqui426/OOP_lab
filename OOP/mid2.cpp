#include<iostream>
using namespace std;
class Numl{
	int x;
	int y;
	public:
	Numl(){
		
	}
    Numl(int x1,int y1){
    x=x1;
	y=y1;	
	}
	Numl operator +(const Numl &obj){
	Numl temp;
	temp.x=x+obj.x;
	temp.y=y+obj.y;
	return temp;
	}
	void show(){
	cout<<x<<"\n"<<y<<endl;
	}
};
int main(){
	Numl obj1(2,3);
	Numl obj2(3,5);
	Numl result;
	result=obj1+obj2;
	result.show();
	return 0;
}
