#include<iostream>
using namespace std;

class Base1{
	public:
		void greet(){
			cout<<"How are you?"<<endl;
		}
};

class Base2{
	public:
		void greet(){
			cout<<"Kaise Ho?"<<endl;
		}
};

class Derived: public Base1,public Base2{
	int a;
	public:
		void greet(){
			Base2::greet();
		}
};

class B{
	public:
		void say(){
			cout<<"Hello World"<<endl;
		}
};

class D: public B{
	int a;
	//this new say() method will override base class's say() method
	public:
		void say(){
			cout<<"Hello my beautiful people"<<endl;
		}
};

int main(){
	//AMBIGUITY 1
//	Base1 base1obj;
//	Base2 base2obj;
//	base1obj.greet();
//	base2obj.greet();
//	Derived d;
//	d.greet();
	
	//AMBIGUITY 2 
	B b;
	b.say();
	
	D d;
	d.say(); 

	return 0;
}
