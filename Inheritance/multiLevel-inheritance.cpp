#include<iostream>
using namespace std;

class animal{
	public:
	int age;
	int height;
	
	public:
		void speak(){
			cout << "Multi Level inheritance speaking" << endl;
		}
		
};

class Dog : public animal{
	
};

class GermanShepherd : public Dog{
	
};

int main(){
	
	GermanShepherd g;
	g.speak();
	
	
	
	return 0;
}