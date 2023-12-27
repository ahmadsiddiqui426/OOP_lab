#include<iostream>
using namespace std;
class Shape{
int width;
int height;
public:
Shape(int w,int h)
{
	width=w;
	height=h;
}
	
void setWidth(int w)
{
	width=w;
}

void setHeight(int h)
{
	height=h;
}

int getWidth()
{
	return width;
}

int getHeight()
{
	return height;
}	
};

class Triangle:public Shape
{
public:
Triangle(int w,int h):Shape( w, h)
{

}

float area()
{
 return (getWidth()*getHeight())/2;
}

};
class Rectangle:public Shape
{
public:
	
Rectangle(int w,int h):Shape( w, h)
{
	
}	

float area()
{
	return getWidth()*getHeight();
}

};

int main(){
	Triangle obj(12,23);
	cout<<"Area is:"<<obj.area()<<endl;
	Rectangle obj2(23,21);
	cout<<"Area is:"<<obj2.area()<<endl;
	return 0;
}
