#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;

class String{
	
	enum { SZ=80};
	char st[SZ];
	
	public:
	String(){
		strcpy(st," ");
	}
	String(char ch[]){
		strcpy(st,ch);
	}
	
	String operator + (String ss){
		String temp;
		if(strlen(st) + strlen(ss.st) <SZ )
		{
			
			strcpy (temp.st,st);
			strcat (temp.st,ss.st);
		}
		else
		{
		cout<<"Overflow";
		exit(1);
	}
	return temp;
	}
	void display (){
		cout<<st;
	}
	
};

int main (){
	String st1="Happy new year";
	String st2="Marry me";
	st1.display ();
		cout<<"\n";


	st2.display();
			cout<<"\n";
	String s3;
	s3=st1+st2;
	s3.display();
}
