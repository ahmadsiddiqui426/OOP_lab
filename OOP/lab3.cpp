#include<iostream>
using namespace std;
class Book{
int pages;//data member
string title;//data member
int price;//data member
public:
Book(int p,string t,int p1){ //parameterized constructor
pages=p;
title=t;
price=p1;
}

void show(){//show function
cout<<"Pages:"<<pages<<"\n"<<"title:"<<title<<"\n"<<"price:"<<price<<endl;
}

};
int main(){
Book obj1(12,"Harry Potter",200);//object
Book obj2(20,"Humour",400);
Book obj3(12,"Harry Potter",200);
obj1.show();
obj2.show();
obj3.show();

obj2=obj1; //assignment operator
obj3=obj1;

obj1.show();
obj2.show();
obj3.show();


return 0;
}
