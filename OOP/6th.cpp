#include <iostream>
#include <string>

using namespace std;

class Player{
	
	string name;
	float average;
	string team;
	
	public:
		Player(string n, float avg, string t){
		name = n;
		average = avg;
		team = t;
		}
		
		string changename(string cn){
		name = cn;
		return name;
		}
		
		float changeavg(float ca){
		average = ca;
		return average;
		}
		
		string changeteam(string ct){
		team = ct;
		return team;
		}
		
	void display(){
		cout << "Player's Attributes:" << endl;
		cout << "Player Name: " << name << endl;
		cout << "Player Average: " << average << endl;
		cout << "Player Team: " << team << endl;
		}	
		
};

int main(){
	Player p1("Virat Kohli",60.5,"India");
	p1.display();
	p1.changename("Rohit Sharma");
	p1.display();
}
