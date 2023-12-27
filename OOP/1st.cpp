#include<iostream>
using namespace std;
class tollBooth{
	int carTotal;
	double cashTotal;
	
	public:
	tollBooth(){
	carTotal=0;
	cashTotal=0;
	}
	
	void payingCar(){
	carTotal += 1;
    cashTotal += 0.5;	
	}
	
	void nopayCar(){
	carTotal += 1;	
	}
	
	void display() const{
	cout << "Number of cars passed by: " << carTotal << "\nCash collected: $" << cashTotal << endl;
	}
	
	~tollBooth(){
	};
};
int main(){

    int ask, value;
      
      tollBooth a; 
      
      cout<<"Press 1 if payment is delievered by car owner.\n";
      cin>>ask;
      if(ask==1)
      {
      	cout<<"Enter no. of cars: ";
      	cin>>value;
      	for(int i=0; i<value; i++)
            a.payingCar();
      }
      cout<<"Press 2 if payment is not delievered by car owner."<<endl;
      cin>>ask;
      
      if (ask==2)
      {
      	cout<<"Enter no. of cars: ";
      	cin>>value;
      	for(int i=0; i<value; i++)
            a.nopayCar();
      }
      cout<<"Press 3 if you want to dispaly total."<<endl;
      cin>>ask;
      
      if (ask==3)
      {
            a.display();
      }
      

    return 0;	
}
