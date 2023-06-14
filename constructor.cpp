//CONSTRUCTOR
#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
		Complex(void); //constructor declaration
	void printNumber(){
		cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
	}
};

Complex :: Complex(void){ //-->This is a default constructor as it takes no parametre 
	a= 0;
	b= 10;
}

int main(){
	Complex c;
	c.printNumber();
	return 0;
}
