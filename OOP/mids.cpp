#include<iostream>
using namespace std;

class Doctor{
	char *name;
	static int ID;
	int experience;
	char *address;
public:
	Doctor (){
		ID++;
	}
	
	void setName( char *n){
		name = n;
	}
	
	char* getName() const {
		return name;
	}
	
	void setaddress( char *a){
		address = a;
	}
	
	char* getaddress() const {
		return address;
	}
	
	void setExperience( int e ){
		experience = e;
	}
	
	int getexperience() const {
		return experience;
	}
	
	static int getID(){
		return ID;
	}
	
	void show (){
		cout << "Doctor Name is: " << name << endl;
		cout << "Doctor ID is: " << ID << endl;
		cout << "Doctor experience is: " << experience << " years" << endl;
		cout << "Doctor address is: " << address << endl;
	}
};

int Doctor::ID;

class Patient{
	char *name;
	char *email;
	char *phoneNo;
	char *address;
public:
	Patient (){	}
	Patient ( char *n, char *e, char *p, char *a){
		name = n;
		email = e;
		phoneNo = p;
		address = a;
	}
	
	Patient ( const Patient& p){
		name = p.name;
		email = p.email;
		phoneNo = p.phoneNo;
		address = p.address;
	}
	
	void show (){
		cout << "Patient Name is: " << name << endl;
		cout << "Patient email is: " << email << endl;
		cout << "Patient phone No is: " << phoneNo << endl;
		cout << "Patient address is: " << address << endl;
	}
};

int main (){
	Doctor d1;
	cout << "Working on Doctor: " << endl;
	d1.setName("Asma");
	d1.getName();
	d1.setaddress("Gujranwala");
	d1.getaddress();
	d1.getID();
	d1.setExperience(5);
	d1.getexperience();
	d1.show();
	cout <<"\n------------------------\n";
	Doctor d2;
	d2.setName("Asma");
	d2.getName();
	d2.setaddress("Gujranwala");
	d2.getaddress();
	d2.getID();
	d2.setExperience(5);
	d2.getexperience();
	d2.show();
	cout <<"\n------------------------\n";
	cout << "Working on Patient: " << endl;
	Patient p1("Rida", "ridaa@gmail.com", "0300", "Sargodha");
	Patient p2;
	p2 = p1;
	p1.show();
	cout <<"\n------------------------\n";
	p2.show();
	return 0;
}




















