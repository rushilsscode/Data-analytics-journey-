#include <iostream>
using namespace std;

class Hero{

	public:
	int power=100;
	// default constructor
	Hero(){
		cout<<"constructor called"<<endl;
	}

	// parameterised constructor
	Hero(int power){
		cout<<"address of this: "<<this<<endl;
		this -> power = power; // here this is used as a pointer which stores the address of object i.e. wolwerine
	}

};
int main(){
	
	// object created for defualt constructor
	Hero wolewrine;

	// parameter construtor 
	Hero deadpool(10);
	cout<<"address of deadpool: "<<&deadpool<<endl;
	cout<<wolewrine.power<<endl;
	cout<<deadpool.power<<endl;

	return 0;
}