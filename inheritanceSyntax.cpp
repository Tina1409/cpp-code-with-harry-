#include<iostream>
using namespace std;

//BASE CLASS
class Employee{
	
	public:
		int id;
		float salary;
		Employee(){
		}
		Employee(int inpId){
			id=inpId;
			salary=34.0;
		}
};

//DERIVED CLASS  syntax
/**
class {derived_class_name} : {visibility_mode} {base_class_name}{
	class members/methods/etc...
};

1.default visibility mode is private
2.public visibility mode: public members of the base class becomes public members of derived class.
3.private visibility mode: public members of the base class becomes private members of the derived class
4. private members are never inherited -->M.IMP
*/

//creating an inheritance 
class Programmer : Employee{
	public:
		Programmer(int inpId){
			id=inpId;
		}
		int languageCode =9;
};
 

int main(){
	Employee tina(1),saurabh(2);
	cout<<tina.salary<<endl;
	cout<<saurabh.salary<<endl;
	
	Programmer skillF(1);
	cout<<skillF.languageCode<<endl;
	return 0;
}
