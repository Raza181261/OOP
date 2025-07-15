#include<iostream>
using namespace std;

class animal{
	public:
		int age;
		int weight;
		
	public:
		void bark(){
			cout<< "Animal barks" << endl;
		}
};

class human{
	public:
		int color;
	public:
		void speak(){
			cout<< "Human speaks" << endl;
		}
};

class Living : public animal, public human{
	//multiple inheritance
};

int main(){
	Living obj;
	obj.bark();
	obj.speak();
	
	
	return 0;
}