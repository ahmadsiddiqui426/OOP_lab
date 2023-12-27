#include<iostream>
using namespace std;
class String{
	string word;
	public:
	String(){
		
	}
	
	String(string w){
	word=w;	
	}
	
	String operator ==(const String &obj){
	if(word.length()==obj.word){
	cout<<"1"<<endl;
	}
	else
	{
	cout<<"0"<<endl;
	}
	
	}
};
int main(){
	String obj1("Hello"),obj2("Hello");
	obj1==obj2;
	return 0;
}
