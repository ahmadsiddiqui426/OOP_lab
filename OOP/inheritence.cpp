/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Animal
{
  public:
  string name;
  int legs;
  string color;
  
  void eat()
  {
      cout<<"I can eat";
  }
  void sleep()
  {
      cout<<"I can sleep";
  }
  void show ()
  {
      cout<<"Hello my name is "<<name<<endl;
      cout<<"I have " << legs <<" legs."<<endl;
      cout<<"I am "<< color<<endl;
  }
};

class Cat: public Animal
{
    public:
    string breed;
    
    void speak()
    {
        cout<<"\nI can speak. Meow Meow!"<<endl;
    }
    
    
};


int main()
{
   /* Animal animal1;
    
    //animal1.name = "Horse";
    //animal1.legs = 4;
    //animal1.color = "Black";
    
    cout<<"Enter number of legs: ";
    cin>>animal1.legs;
    cout<<"\nEnter name: ";
    cin>>animal1.name;
    cout<<"\nEnter color: ";
    cin>>animal1.color;
    
    animal1.show();
    animal1.sleep();
    
    */
    
    Cat myCat;
    myCat.name = "Tom";
    myCat.legs= 4;
    myCat.breed = "Persion";
    myCat.color = "Grey";
    
    myCat.show();
    cout<<endl<<" My breed is "<<myCat.breed;
    
    myCat.speak();
    
    return 0;
}
