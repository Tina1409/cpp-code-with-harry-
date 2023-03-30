#include<iostream>
using namespace std;

class BaseClass{
	public:
		int var_base;
		void display(){
			cout<<"Displaying Base class variable var_base"<<var_base<<endl;
		}
};

class DerivedClass : public BaseClass{
	public:
		int var_derived;
		void display(){
			cout<<"Displaying derived class variable var_bderived"<<var_derived<<endl;
		}
};

int main(){
	BaseClass* base_class_pointer;
	BaseClass obj_base;
	DerivedClass obj_derived;
	base_class_pointer = &obj_derived;
	
	base_class_pointer->var_base = 34;
	base_class_pointer->display();
	return 0;
}
