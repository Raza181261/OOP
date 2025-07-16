#include<iostream>
using namespace std;

class animal{
	public:
		void speak(){
			cout<< "Speaking " << endl;
		}
};

class Dog : public animal{
	//this function calls because we added thier own function. if we didn't add this function then speak call
	public:
		void speak(){
			cout << "Barking " << endl;
		}
};

int main(){
	Dog obj;
	obj.speak();
	
	
	
	return 0;
}