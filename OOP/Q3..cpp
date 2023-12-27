#include <iostream>
using namespace std;
class cylinderType
{	
	private:
	double radius;
	double height;
		
	public:
	cylinderType()
	{
	radius = 0;
	height = 0;	
	}
	
	cylinderType(double r, double h)
	{
	radius=r;
	height=h;
	}
	
	/*void setRadius(double r)
	{
	if(r<0)  r=0;
	radius=r;	
	//if (r >= 0)
	//radius = r;
	//else
	//radius = 0;
	}
	
	void setHeight(double h)
	{
	if(h<0)  h=0;
	height=h;	
	//if (h >= 0)
	//height = h;
	//else
	//height = 0;	
	}
	double getRadius()
	{
	return radius;	
	}
	
	double getHeight()
	{
	return height;	
	}*/
	
	double volume()
	{
	return 3.14*(radius*radius)*height;	//V=pr2h
	}
	
	double area()
	{
	return (2*3.14*radius*height) + (2*3.14*(radius*radius));//A=2prh+2pr2
	}

};
	
int main()
{
	double radius;
	double height;
	double shipCost;
	double paintCost;
	double paintTotal;
	double total;
	
	//cylinderType obj;
	
	cout << "This is Amanda & Tyler's Cylinder Painting and Shipping services." << endl << endl;
	cout << "Please enter the dimensions of the container (radius and height)." << endl;
	cout << "Radius (in feet): ";
	cin >> radius;
	cout << endl;
	cout << "Height (in feet): ";
	cin >> height;
	cout << endl << endl;
	
	cylinderType obj(radius,height);
	//obj.setRadius(radius);
	//obj.setHeight(height);
	
	
	cout << "Please enter the shipping cost per liter: $";
	cin >> shipCost;
	cout << endl;
	total = shipCost * obj.volume() * 28.32;	
	cout << "Based on the container dimensions and shipping cost, your total comes to $" << total << endl;
	
	
	cout << "Please enter the paint cost per square foot: ";
	cin >> paintCost;
	cout << endl;
	
	paintTotal = paintCost * obj.area();
	//total = (shipCost * obj.volume()) + (paintCost * obj.area());
	
	total=total+ paintTotal;
	cout << "The cost of painting the container comes to $" << paintTotal << endl;
	cout << "Your new total, including shipping and painting cost, is $" << total << endl << endl;
	cout << "Thank you for choosing Amanda & Tyler's Cylinder Painting and Shipping services." << endl;
	return 0;
}
