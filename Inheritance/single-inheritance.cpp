#include<iostream>
using namespace std;

class animal{
	public:
		int age;
		int height;
		
	public:
		void speak(){
			cout<< "single inheritance speaking" << endl;
		}
};

class Dog: public animal{
	// this is single inheritance. in it on child class inherit from one parent class
};


int main(){
	Dog d;
	d.speak();
	
	
	
	return 0;
}