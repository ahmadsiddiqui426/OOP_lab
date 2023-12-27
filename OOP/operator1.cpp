#include<iostream>

using namespace std;

class Distance{
	
	int ft;
	int inches;
	
	public:
		
	Distance():ft(0),inches(0){
		
	}
	Distance(int f,int i):ft(f),inches(i){
		
	}
	Distance& operator ++ (){
		Distance temp=*this;
		++ft;
		++inches;
		return *this;
	}
	
	Distance operator + (const Distance &d2){
		Distance temp;
		temp.ft=ft+d2.ft;
		temp.inches=inches+d2.inches;
		return temp;
	}
	
	Distance& operator += (const Distance &d2){
		this->ft=this->ft+d2.ft;
		this->inches=this->inches + d2.inches;
		return *this;
	}
	
	
		Distance& operator ++ (int){
		Distance temp=*this;
		ft++;
		inches++;
		return *this;
	}
	void show (){
		cout<<"Feet is: "<<ft<<endl;
		cout<<"Inches is : "<<inches<<endl;
	}
	friend ostream operator << (ostream &,const Distance &);
};

 ostream operator << (ostream &out, const Distance &d4){
	out<<"Distance in feet is : "<<d4.ft<<endl;
	out<<"Distance in inches is : "<<d4.inches<<endl;
	return out;
}

int main (){
	
	Distance obj(3,5);
	Distance obj2(4,5);
	obj.show();
	cout<<"\nPrefix operator"<<endl;
	++obj;
	obj.show();
	
	Distance obj3;
	obj3=obj+obj2;
	cout<<"\nAddition operator"<<endl;
	obj3.show();
	
	cout<<"\nAddition and equal to operator"<<endl;
	obj3+=obj2;
	obj3.show();
	
	Distance obj5;
	cout<<"\nPostfix operator"<<endl;
	obj5++;
	obj5.show();
	
	Distance obj6(10,10);
	cout<<obj6<<endl;
}
