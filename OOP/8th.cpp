#include <iostream>
#include <cstring>

using namespace std;

class Run{
	
	string name;
	float distance;
	public:
	Run()
	{
	distance=0;
	}
		
		void setName(string n){
		name = n;	
		}
		string getName(){
		return name;
		}
		void setDis(float d){
		distance = d;
		}
		float getDis(){
		return distance;
		}
		
		void display(){
		cout << "Player's Info:" << endl;
		cout << "Player Name: " << name << endl;
		cout << "Total Distance Covered by player: " << distance << " meters" << endl;
		cout << endl << "----------------------------------------------------------------------" << endl << endl;
		}
		
		bool operator > (Run &obj){
		if(this->distance>obj.distance){	
		return true;
		}
		}
		
};

int main(){
	Run Most;
	
	Run r1;
	r1.setName("Murad Raas");
	r1.setDis(500);
	r1.display();
	Most = r1;
	
	Run r2;
	r2.setName("Fawad Chaudhary");
	r2.setDis(400);
	r2.display();
	
	if(r2 > Most)
	Most =r2;	
	
	Run r3;
	r3.setName("Asad Umar");
	r3.setDis(700);
	r3.display();
	
	if (r3 > Most)
	Most = r3;
	
	Run r4;
	r4.setName("Usman Buzdar");
	r4.setDis(600);
	r4.display();
	
	if(r4 > Most)
	Most = r4;

	Most.display();


}
