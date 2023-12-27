/*#include<iostream>
using namespace std;
class Student{
	public:
	int id;
	float cgpa;
	string name;
	string degree;
};

int main(){
	Student obj1;
	Student obj2;
	obj1.id=21;
	obj1.cgpa=3.14;
	obj1.name="Muhammad Ahmad Siddiqui";
	obj1.degree="Bcs";
	cout<<obj1.name<<endl;
	cout<<obj1.id<<endl;
	cout<<obj1.degree<<endl;
	cout<<obj1.cgpa<<endl;
	cout<<"\n";
	obj2.id=22;
	obj2.cgpa=3.56;
	obj2.name="Ali Murad";
	obj2.degree="Bcs";
	cout<<obj2.name<<endl;
	cout<<obj2.id<<endl;
	cout<<obj2.degree<<endl;
	cout<<obj2.cgpa<<endl;
	return 0;
}*/


/*#include<iostream>
using namespace std;
class Car{
	public:
	void myMethod(){ //Method/Function dedfined inside the class
	cout <<"Hello World";	
	}
};
int main(){
	Car obj;
	obj.myMethod();
	return 0;
}

#include<iostream>
using namespace std;
class Vehicle{
	protected:
	int wheels;
	int model;
	char* import;
	
	public:
	Vehicle(){
	cout<<"This is contructor.\n";
	}
	
	Vehicle(int w,int m,char* i){
	wheels=w;
	model=m;
	import=i;
	cout<<"Parent constructor.\n";
	}
	
	void setWheels(int w){
	wheels=w;
	}
	
	void setModel(int m){
	model=m;
	}
	
	void setImport(char* i){
	import=i;
	}
	
	int getWheels(){
	return wheels;
	}
	
	int getModel(){
    return model; 
	}
	
	char* getImport(){
	return import;
	}
	
	
	
	void Brakes(){
	cout<<"These are brakes.";
	}
	
	void cruise_control(){
	cout<<"This is cruise control.";
	}
	
	void show(){
	cout<<"Number of wheels are:"<<wheels<<endl;
	cout<<"Model is"<<model<<endl;
	cout<<"Import is from"<<import<<endl;
	}
	~Vehicle(){
	cout<<"Parent destructor.\n";
	}
};

class Car:public Vehicle{
	int petrol_average;
	public:
	Car():Vehicle(){
	cout<<"non parametrized child constructor\n";
	}	
	Car(int w,int m,char* i,int pa):Vehicle(w,m,i){
	petrol_average=pa;
	cout<<"Child constructor.\n";	
	}
	void seats(){
	cout<<"These are seats.\n";	
	}
	~Car(){
	cout<<"Child destructor.\n";
	}
	
};

int main(){
	Car obj(4,2020,"China",11);
	obj.seats();
	cout<<obj.getModel();
	obj.~Car();
	Car obj2;
	
	return 0;
}

/*#include<iostream>
using namespace std;
class Bike{
	public:
	void myMethod(); //Method/Function declaration
};

void Bike::myMethod(){
	cout<<"Hello World"; //Function defined outside the class
}
int main(){
	Bike obj;
	obj.myMethod();
	return 0;
}

//Parameters
#include<iostream>
using namespace std;
class Car{
	public:
	int speed(int maxSpeed);	
};
int Car:: speed(int maxSpeed){
	return maxSpeed;
}
int main(){
Car obj;
cout<<obj.speed(200);
return 0;	
}
#include<iostream>
using namespace std;
class Teacher{
	public:
	int salary;
	string name;
	string subject;
	Teacher(){
    cout<<"This is a teacher";
	}
	Teacher(string n,string s1,int s2);
	
	void show(){
    cout<<name<<endl<<subject<<endl<<salary<<endl;
	}
};
Teacher::Teacher(string n,string s1,int s2){
	name=n;
	subject=s1;
	salary=s2;
	}
int main(){
	Teacher obj("Aleem Dar","OOP",65000);
	obj.show();
	return 0;
}


#include<iostream>
using namespace std;
class School{
	public:
	string school_name;
	int no_of_campus;
	int no_of_teacher;
	int no_of_student;
	School(){
	cout<<"This is non-parameterized constructor";
	}
	School(string s0,int c,int t,int s1);
	void show(){
	cout<<school_name<<endl<<no_of_campus<<endl<<no_of_teacher<<endl<<no_of_student<<endl;
	}
};
School::School(string s0,int c,int t,int s1){
    school_name=s0;
	no_of_campus=c;
	no_of_teacher=t;
	no_of_student=s1;	
}

int main(){
	School obj1("ASOS",5,200,1000);
	obj1.show();
	
	
	
	return 0;
}

#include<iostream>
using namespace std;
class Employee{
	private:
	int salary;
	
	public:
	void setSalary(int s){
	salary=s;
	}
	int getSalary(){
	return salary;
	}
};
int main(){
	Employee obj;
	obj.setSalary(10000);
	cout<<obj.getSalary();
	return 0;
}

#include<iostream>
using namespace std;
class Point{
	private:
	int x;
	int y;
	public:
	Point(){
		x=y=0;
	}
	
	
	
	Point (int x1,int y1){
		x=x1;
		y=y1;
	}
	
	void setX(int x1){
		if(x<0)  x=0;
		x=x1;
	}
	
	void setY(int y1){
		if(y<0)  y=0;
		y=y1;
	}
	
	void show(){
		cout<<"Point is:"<<x<<","<<y<<endl;
	}
	
};
int main(){
	Point p1(2,0),p2(20,9);
	p1.show();
	p2.show();
	p1.setX(2);
	p1.setY(3);
	p1.show();
	p2.setX(6);
	p2.setY(8);
	p2.show();
	p2.setX(4);
	p2.setY(12);
	p2.show();
	return 0;
}

// Demonstration of constant object,
// show that constant object can only
// call const member function
#include<iostream>
using namespace std;
class Demo
{
	int value;
	public:
	Demo(int v = 0)
    {
	value = v;
	}
	void showMessage()
	{
		cout<<"Hello World We are Tushar, "
		"Ramswarup, Nilesh and Subhash Inside"
		" showMessage() Function"<<endl;
	}
	void display()const
	{
		cout<<"Hello world I'm Rancho "
		"Baba Inside display() Function"<<endl;
	}
};
int main()
{
//Constant object are initialised at the time of declaration using constructor
	const Demo d1;
	//d1.showMessage();Error occurred if uncomment.
	d1.display();
	return(0);
}

#include<iostream>
using namespace std;
class Member{
	public:
	Member(){
		cout<<"Constructor is called"<<endl;
	}
	~Member(){
		cout<<"Destructor is called"<<endl;
	}
	void show ()const
	{
		cout<<"Member function"<<endl;
	}
};
void func(){
	Member obj1;
}

int main(){
    Member obj;
	obj.show();
	func();
	return 0;
}

#include<iostream>
using namespace std;
class Point{
	private:
	int x;
	int y;
	public:
	Point(int x1,int y1){
	x=x1;
	y=y1;	
	}
	Point(const Point &p1){
	x=p1.x;
	y=p1.y;
	}
	int getX(){
	return x;
	}
	int getY(){
	return y;
	}
	void show(){
	cout<<"Point is:"<<x<<","<<y<<endl;
	}
};
int main(){
	Point p1(23,34),p2(12,21);
	//Point p2=p1;
	//cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    //cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
    p1.show();
    p2.show();
    p1=p2;
    p1.show();
    p2.show();
    
    return 0;
	
}

#include<iostream>
using namespace std;
class A{
	public:
	A(){
	cout<<"Constructor of A called"<<endl;
	}
	~A(){
	cout<<"Destructor of A called"<<endl;
	}
};
class B:public A{
	public:
	B(){
	cout<<"Constructor of B called"<<endl;
	}
	~B(){
	cout<<"Destructor of B called"<<endl;
	}
};
class C:public B{
	public:
	C(){
	cout<<"Constructor of C called"<<endl;
	}
	~C(){
	cout<<"Destructor of C called"<<endl;
	}
};
int main(){
	B objB1;
	B objB2;
	return 0;
}

#include<iostream>
using namespace std;
class Vehicle{
	protected:
	int wheels;
	int model;
	char* import;
	
	public:
	Vehicle(){
	cout<<"This is contructor.\n";
	}
	
	Vehicle(int w,int m,char* i){
	wheels=w;
	model=m;
	import=i;
	cout<<"Parent constructor.\n";
	}
	
	void setWheels(int w){
	wheels=w;
	}
	
	void setModel(int m){
	model=m;
	}
	
	void setImport(char* i){
	import=i;
	}
	
	int getWheels(){
	return wheels;
	}
	
	int getModel(){
    return model; 
	}
	
	char* getImport(){
	return import;
	}
	
	
	
	void Brakes(){
	cout<<"These are brakes.";
	}
	
	void cruise_control(){
	cout<<"This is cruise control.";
	}
	
	void show(){
	cout<<"Number of wheels are:"<<wheels<<endl;
	cout<<"Model is"<<model<<endl;
	cout<<"Import is from"<<import<<endl;
	}
	~Vehicle(){
	cout<<"Parent destructor.\n";
	}
};

class Car:public Vehicle{
	int petrol_average;
	public:
	Car():Vehicle(){
	cout<<"non parametrized child constructor\n";
	}	
	Car(int w,int m,char* i,int pa):Vehicle(w,m,i){
	petrol_average=pa;
	cout<<"Child constructor.\n";	
	}
	void seats(){
	cout<<"These are seats.\n";	
	}
	~Car(){
	cout<<"Child destructor.\n";
	}
	
};

int main(){
	Car obj(4,2020,"China",11);
	obj.seats();
	cout<<obj.getModel();
	obj.~Car();
	Car obj2;
	
	return 0;
}


#include<iostream>
using namespace std;
class Building{
	int no_of_rooms;
	string location;
	int floors;
	string color;
	int worth;
	
	public:
	Building(){
	cout<<" Non Parametrized Parent Constructor.\n";
	}
	
	Building(int r,string l,int f,string c,int w){
	no_of_rooms=r;
	location=l;
	floors=f;
	color=c;
	worth=w;
	}
	
	void setNo_of_rooms(int r){
	no_of_rooms=r;
	}
	
	void setLocation(int l){
	location=l;	
	}
	
	void setFloors(int f){
	floors=f;	
	}
	
	void setColor(int c){
	color=c;	
	}
	
	void setWorth(int w){
	worth=w;	
	}
	
	int getNo_of_rooms(){
	return no_of_rooms;
	}
	
	string getLocation(){
	return location;
	}
	
	int getFloors(){
	return floors;
	}
	
	string getColor(){
	return color; 
	}
	
	int getWorth(){
	return worth;
	}
	
	void person(int p){
	if(p<1)
	cout<<"Not a Building.\n";
	else
	cout<<"This is a building.\n";	
	}
	
	void show(){
    cout<<"Numbers of rooms are: /n"<<no_of_rooms;
    cout<<"Location is:\n"<<location;
    cout<<"Number of floor are:\n"<<floors;
    cout<<"Color is:\n"<<color;
    cout<<"Worth is:\n"<<worth;
	}
	
	~Building(){
    cout<<"Parent destructor.\n";
	}
};
class House:public Building{
	int bedrooms;
	int kitchen;
	public:
	House():Building(){
	cout<<"Non parametrized constructor.\n";
	}
	House(int r,string l,int f,string c,int w,int b,int k):Building(r,l,f,c,w){
	bedrooms=b;
	kitchen=k;
	cout<<"Parametrized Child  Constructor.\n";	
	}
	
	void doors(){
	cout<<"These are doors.\n";
	}
	
	void windows(){
	cout<<"These are windows.\n";
	}
	
	~House(){
	cout<<"Child Destructor.\n";
	}
	
};

int main(){
	House obj(200,"karachi",15,"White",2000000,20,10);
	House obj2;
	obj.doors();
	obj.getColor();
	obj.getFloors();
	obj.getLocation();
	obj2.~House();
	
	return 0;
}



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

float area(int w,int h)
{
	return (w*h)/2;
}

};

class Rectangle:public Shape
{
public:
	
Rectangle(int w,int h):Shape( w, h)
{
	
}	

float area(int h,int w)
{
	return w*h;
}

};

int main(){
	Triangle obj(12,23);
	cout<<"Area is:"<<obj.area(12,23)<<endl;
	Rectangle obj2(23,21);
	cout<<"Area is:"<<obj2.area(23,21)<<endl;
	
}

#include <iostream>

using namespace std;

class cylinderType
{
	
	private:
	double radius;
	double height;
		
	public:
		void setRadius(double r);
		double getRadius();
		void setHeight(double h);
		double getHeight();
		double volume();
		double area();
		cylinderType(double r, double h);
		cylinderType();
		
	
};
	


void cylinderType::setRadius(double r)
{
	if (r >= 0)
		radius = r;
	else
		radius = 0;
}
	
double cylinderType::getRadius()
{
	return radius;
}

void cylinderType::setHeight(double h)
{
	if (h >= 0)
		height = h;
	else
		height = 0;
}
	
double cylinderType::getHeight()
{
	return height;
}

double cylinderType::volume()	//Calculates the volume of the cylinder
{
	return 3.14*(radius*radius)*height;
}

double cylinderType::area()		//Calculates the area of the cylinder
{
	return (2*3.14*radius*height) + (2*3.14*(radius*radius));
}

cylinderType::cylinderType(double r, double h)
{
	setRadius(r);
	setHeight(h);
}

cylinderType::cylinderType()
{
	radius = 0;
	height = 0;
}


	
int main()
{
	double radius;
	double height;
	double shipCost;
	double paintCost;
	double paintTotal;
	double total;
	char answer;
	
	cylinderType program;
	
	//Prompts the user to input the dimensions (in feet) of the container (radius of the base and the height)
	cout << "This is Amanda & Tyler's Cylinder Painting and Shipping services." << endl << endl;
	cout << "Please enter the dimensions of the container (radius and height)." << endl;
	cout << "Radius (in feet): ";
	cin >> radius;
	cout << endl;
	cout << "Height (in feet): ";
	cin >> height;
	cout << endl << endl;
	
	//Sets radius and height from the input values
	program.setRadius(radius);
	program.setHeight(height);
	
	//Prompts the user to input the shipping cost per liter
	cout << "Please enter the shipping cost per liter: $";
	cin >> shipCost;
	cout << endl;
	total = shipCost * program.volume() * 28.32;	//Includes conversion from liters to cubic feet
	cout << "Based on the container dimensions and shipping cost, your total comes to $" << total << endl;
	
	//Provides the option to paint the outside of the container and outputs the cost of painting separately
	while (answer != 'Y' || answer != 'N')
	{
	cout << "Would you like the container to be painted?" << endl;
	cout << "Enter Y for Yes or N for No: ";
	cin >> answer;
	cout << endl;
	if (answer == 'Y' || answer == 'y')
	{
		cout << "Please enter the paint cost per square foot: ";
		cin >> paintCost;
		cout << endl;
		paintTotal = paintCost * program.area();
		total = (shipCost * program.volume()) + (paintCost * program.area());
		cout << "The cost of painting the container comes to $" << paintTotal << endl;
		cout << "Your new total, including shipping and painting cost, is $" << total << endl << endl;
		cout << "Thank you for choosing Amanda & Tyler's Cylinder Painting and Shipping services." << endl;
	}
	else if (answer == 'N' || answer == 'n')
	{
		cout << "Your final total is $" << total << endl << endl;
		cout << "Thank you for choosing Amanda & Tyler's Cylinder Painting and Shipping services." << endl;
	}
	break;
	}
	
	return 0;
}

#include<iostream>
using namespace std;
class TollBooth
{   private:
    unsigned int car;
    double money;
    public:
    TollBooth(): car(0), money(0) {}
    void payingCar()
    {
         car=car+1;
         money=money+1;
    }
    void nopayCar()
    {
         car=car+1;
         money=money+0;
    }
    void display()
    {
         cout<<"\n Total Money Collected On tooBooth = "<<money<<endl;
    }
    void get()
    {
         cout<<" Total cars On tooBooth = "<<endl;
    }
};
 
int main()
{
       char x;
       TollBooth d;
       cout<<"Enter 1 For Toll Paying Cars and 2 For Non-Toll Paying Cars = ";
       cout<<"";
cin>>x;
switch (x)
   {
       case '1':
                 d.payingCar();
                 d.display();
                 d.get();
                 break;
        case '2':
                 d.nopayCar();
                 d.display();
                 d.get();
                 break;
   }
return 0;
}
#include <iostream>
#include <string>
using namespace std;


class Car
{
public:
    Car()
    {};
    Car(string n, string d, float p) 
    {
        m_name = n;
        m_direct = d;
        m_position = p;
    }
    void turn() 
    {
        if (m_direct == "E") 
        {
            m_direct == "S";
        }
        else if (m_direct == "S")
        {
            m_direct == "W";
        }
        else if (m_direct == "W")
        {
            m_direct == "N";
        }
        else if (m_direct == "W")
        {
            m_direct == "N";
        }
    }


    void turn(string d)
    {
        m_direct = d;
    }


    void set_position(float s)
    {
        m_position = s;
    }


    string m_name="No_name";
    string  m_direct = "E";
    float m_position{ 0 };
};




int main()
{
    // for example test create elements class Car 
    Car car_ex("first", "S", 258.0);
    // turn right 
    car_ex.turn();
    cout << car_ex.m_direct << endl;
    // turn with parametr
    car_ex.turn("N");
    cout << car_ex.m_direct << endl;
    // set position 
    car_ex.set_position(120);
    cout << car_ex.m_position << endl;
    return 0;
}

#include<iostream>
using namespace std;
class Demo{
	private:
	static int count;
	public:
	Demo(){
	count++;	
	}	
	int getCount(){
	return count;
	}
};
int Demo::count=0;
int main(){
Demo f1,f2,f3;
	cout<<f1.getCount()<<f2.getCount()<<f3.getCount();
	return 0;
} 



#include<iostream>
using namespace std;
class Counter{
    protected:

	int count;
	
	public:
	Counter(){
		
	}
	Counter(int c){
	count =c;
	}
	
	int getCount(){
	return count;
	}
	
	Counter operator ++(){
	++count;
	Counter temp;
	temp.count=count;
	return temp;	
    }
};

class CountDN:public Counter{
	
    public:
	CountDN(){
		
	}
	
	CountDN(int c){
	count=c;
	}
	
	Counter operator --(){
	--count;
	Counter temp1;
	temp1.count=count;
	return temp1;	
    }
};
int main(){
	CountDN obj1(12);
	return 0;
}



























































































