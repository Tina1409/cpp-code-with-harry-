#include<iostream>
using namespace std;
/*
case1:
class B: public A{
	//order of execution of the constructor--> first A() then B()
}

case2:
class A: public B , public C{
	//order of execution of the constructor --> B() then C() and A()
}

case3:
class A: public B, virtual public C{
	//order of execution of the constructor --> C() then B() and A()
}

*/

class Base1{
	int data1;
	public:
		Base1(int i){
			data1=i;
			cout<<"Base1 class constructor called"<<endl;
		}
		void printDataBase1(void){
			cout<<"The value of data1 is "<<data1<<endl;
		}
};

class Base2{
	int data2;
	public:
		Base2(int i){
			data2=i;
			cout<<"Base2 class constructor called"<<endl;
		}
		void printDataBase2(void){
			cout<<"The value of data2 is "<<data2<<endl;
		}
};

class Derived: public Base1,public Base2{
	int derived1,derived2;
	public:
		Derived(int a,int b,int c,int d): Base1(a),Base2(b){
			derived1=c;
			derived2=d;
			cout<<"Derived class constructor called"<<endl;
		}
		void printDataDerived(void){
			cout<<"The value of derived1 is "<<derived1<<"and"<<"derived2 is"<< derived2<<endl;
		}
};

int main(){
	Derived tina(1,2,3,4);
	tina.printDataBase1();
	return 0;
}
