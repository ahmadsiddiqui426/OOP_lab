#include<iostream>
using namespace std;
class Point{
	int x,y;
	public:
	Point(int x1,int y1){
	x=x1;
	y=y1;
    cout<<"Point class constructor."<<endl;
    cout<<x<<","<<y<<endl;
	}
};

class Triangle{
	Point a,b,c;
	public:
	Triangle():a(1,2),b(2,3),c(3,4)
	{
	cout<<"Triangle class constructor."<<endl;
	}
};
int main(){
	Triangle t1;
	//Triangle t2;
	return 0;
}
