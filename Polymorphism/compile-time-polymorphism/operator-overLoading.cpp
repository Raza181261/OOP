#include<iostream>
using namespace std;

class B{
	public:
		int a;
		int b;
		public:
			int add(){
				return a+b;
			}
			
			void operator+ (B &obj){
				int value1 = this->a;
				int value2 = obj.a;
				cout << " Output: " << value1-value2 << endl;
			}
};

int main(){
	B obj1,obj2;
	
	obj1.a = 10;
	obj2.a = 8;
	
	obj1+obj2;
	
	
	
	return 0;
}