#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Floyd_Triangle{
int x;
public:
Floyd_Triangle(){
	
}
void setNo_of_rows(int n){
	x=n;
}
friend int show(Floyd_Triangle);
	
};
int show(Floyd_Triangle obj){
	for(int i=1;i<=obj.x;i++){
		for(int j=1;j<=i;j++){
			cout<<rand()%2;
			
		}
		cout<<endl;
	}
}
int main(){
    srand(time(0));
    int x1;
    Floyd_Triangle obj2;
    cout<<"Enter no of rows:";
    cin>>x1;
    obj2.setNo_of_rows(x1);
    show(obj2);
    return 0;
}

