#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		Complex(int ,int ); //constructor declaration
	void printNumber(){
		cout<<"Your number is"<<a<<"+"<<b<<"i"<<endl;
	}
};

//Complex :: Complex(void){ //-->This is a default constructor as it takes no parametre 
//	a= 0;
//	b= 10;
//}

Complex :: Complex(int x,int y){ //-->it is a parameterized constructor
	a=x;
	b=y;
}

int main(){
	//implicit call
	Complex a(4,6);
	a.printNumber();
	
	//explicit call
	Complex b= Complex(5,7);
	b.printNumber();
	return 0;
}
