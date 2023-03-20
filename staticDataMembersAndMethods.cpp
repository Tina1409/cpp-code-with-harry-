#include<iostream>
using namespace std;
class Employee{
	int id;
	static int count; 
	//static int count=1000; //it will give an error 
	
	public:
		void setData(void){
			cout<<"Enter the id"<<endl;
			cin>>id;
			count++;
		}
		void getData(void){
			cout<<"The id of this employee is: "<<id<<"and this is employee number"<<count<<endl;
			
		}
		static void getCount(void){
			//int id; //throws an error
			cout<<"The value of count is "<<count<<endl;
			
		}
};

int Employee ::count=1000; //default value is 0 for static variable
int main(){
	Employee tina,saurabh;
	tina.setData();
	tina.getData();
	Employee :: getCount();
	
	saurabh.setData();
	saurabh.getData();
	Employee :: getCount();
	
	return 0;
}

