#include<iostream>
using namespace std;

class Hero{
	private:
	int health;
	
	public:
	char level;
	
	// getter
	int getHealth(){
		return health;
	}
	
	char getLevel(){
		return level;
	}
	
	//setter
	void setHealth(int h){
		health = h;
	}
	void setLevel(char l){
		level = l;
	}
	
};

int main(){
//     object creation statically
       Hero a;
//       object creation dynamically
      Hero *b = new Hero;
	
	// object creation
	 Hero Rajo;
	 cout<<"Size of Rajo is: "<< sizeof(Rajo)<<endl;
	 
	 
	 Rajo.setHealth(50); //setter call
	 Rajo.level = 'A';
	 
	 cout<< "Rajo's Health is: " << Rajo.getHealth() << endl;
	 cout<< "Rajo's Level is: " << Rajo.level << endl;
	 
	// cout << "Size : " << sizeof(number) << endl;
	return 0;
}