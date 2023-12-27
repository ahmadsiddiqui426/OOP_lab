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
    name = n;
    direction = d;
    position = p;
    }
    void turn() 
    {
        if (direction == "E") 
        {
        direction == "S";
        }
        else if (direction == "S")
        {
        direction == "W";
        }
        else if (direction == "W")
        {
        direction == "N";
        }
        else if (direction == "W")
        {
        direction == "N";
        }
    }


    void turn(string d)
    {
    direction = d;
    }

    void set_position(float s)
    {
    position = s;
    }

    string name="No_name";
    string  direction = "E";
    float position{ 0 };
};

int main()
{
    
    Car obj("first", "S", 258.0);
    
    obj.turn();
    cout << obj.direction << endl;
    
    obj.turn("N");
    cout << obj.direction << endl;
    
    obj.set_position(120);
    cout << obj.position << endl;
    return 0;
}
