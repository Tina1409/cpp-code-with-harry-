#include<iostream>
using namespace std;
class Number{
	int a;
	public:
		Number(){
		a=0;
		}; //we need to create this default constructor or else it will give an error
		Number(int num){
			a=num;
		}
		
		//when no copy constructor is found,compiler supplies its own copy constructor
		Number(Number &obj){
			cout<<"Copy instructor called!!"<<endl;
			a=obj.a;
		}
		
		void display(){
			cout<<"The number for this object is"<<a<<endl;
		}
};

int main(){
	Number x,y,z(45);
	x.display();
	y.display();
	z.display();
	
	Number z1(x); //copy constructor invoked
	z1.display();
	return 0;
}
