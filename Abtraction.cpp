#include<iostream>
using namespace std;

class animal{
	public:
	  virtual void sound() = 0; // pure vitual function
	  
	  void sleep(){
	  	cout << "Sleeping "<<endl;
	  }
};

class Dog : public animal{
	public: void sound(){
		cout << "woof" << endl;
	}
};

int main(){
	Dog obj;
	obj.sound();
	obj.sleep();
	
	
	
	return 0;
}