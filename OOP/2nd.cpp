#include <iostream>
#include <cmath>

using namespace std;
class Time{
	int hours;
	int mins;
	int secs;
	
	public:
	Time(){
    hours = 0;
	mins = 0;
	secs = 0;
	}
	
	Time(int h,int m, int s){
	hours = h;
	mins = m;
	secs = s;
	}
	
	Time operator +(const Time &obj){
	Time temp;
	temp.hours=hours+obj.hours;
	temp.mins=mins+obj.mins;
	temp.secs=secs+obj.secs;
	return temp;
	
	}
	 
	void show(){
	cout<<"TIME: " << hours << ":" << mins << ":" << secs<<endl;
	}
	 
};
int main(){
	Time obj;
	Time obj1(9,30,40);
	Time obj2(2,29,19);
	Time result;
	result =obj1+obj2;
	result.show();
	return 0;
}
