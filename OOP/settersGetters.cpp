/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Animal
{
    private:
    string name;
    int legs;
    string color;
    
    public:
    void setName(string n){
        name = n;
    }
    void setColor(string c){
        color = c;
    }
    void setLegs(int l){
        if(l<=4)
            legs = l;
        else
        {
            cout<<"Abnormal";
            legs = 4;
        }
    }
    
    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }
    int getLegs(){
        return legs; 
    }
    
};

class Cat: public Animal
{
  public:
  string breed;
  
  
};

int main()
{
   Animal ani1;
   ani1.setName("Goat");
   ani1.setColor("Grey");
   ani1.setLegs(7);

    cout<<ani1.getName()<<endl;
    cout<<ani1.getColor()<<endl;
    cout<<ani1.getLegs()<<endl;
    return 0;
}
