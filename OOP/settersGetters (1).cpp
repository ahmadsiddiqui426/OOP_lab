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
        string color;
        int legs;
        string name;
        
    public: 
	void show()
    {
        cout<<"I am "<<name<<endl;
        cout<<"I am "<<color<<endl;
        cout<<"I have "<<legs<<" legs."<<endl; 
    }
    void setName(string s)
    {
        name = s;
    }
    void setColor(string c)
    {
        color = c;
    }
    void setLegs(int l)
    {
        if(l <= 4)
        {
            legs = l;
        }
        else
        {
            cout<<"Abnormal"<<endl;
            legs = 4;
        }
    }
    
    string getName()
    {
        return name;
    }
    string getColor()
    {
        return color;
    }
    int getLegs()
    {
        return legs;
    }
};

class Cat :  public Animal
{
    public:
    string breed;
    
    void showCat(){
        breed = "Persian";
        cout<<"I am "<<breed<<endl;
    }
};
int main()
{
    Animal an1;
    
    an1.setName("My horse");
    an1.setColor("Pink");
    an1.setLegs(10);
    
    cout<<an1.getName()<<endl;
    cout<<an1.getColor()<<endl;
    cout<<an1.getLegs();
    
    return 0;
}
