#include<iostream>
using namespace std;

class A{
	// in function overLoading function's name will be same but argument will be diffrnt
	public:
		void sayHello(){
			cout << "Hello world" << endl;
		}
		
		void sayHello(string name){ 
			cout << "Hello world" << endl;
		}
};

int main(){
	A obj1;
	obj1.sayHello();
	
	
	return 0;
}