#include <iostream>
using namespace std;

class Counter{
	protected:
		int count;
	public:
		Counter(){
		}
		Counter(int c){
			count = c;
		}
		int get_count(){
			return count;
		}
		Counter operator ++(){
			++count;
			Counter temp;
			temp.count=count;
			return temp;
		}
};

class CountDN : public Counter{
	
	public:
		
		CountDN(){
		}
		CountDN(int c){
			count =c ;
		}
		
		CountDN operator --(){
			--count;
			CountDN temp;
			temp.count=count;
			return temp;
		}
		void show(){
			cout << "Count = " << count << endl;
		}
};

int main(){
	CountDN C(12);
	++C;
	C.show();
	--C;
	C.show();
}
