#include<iostream>
using namespace std;
int main(){
	int marks[]={100,99,45,89};
	int* p=marks;
	cout<<"The value of marks[0] is "<<*p<<endl;
	cout<<"The value of marks[1] is "<<*(p+1)<<endl;
	cout<<"The value of marks[2] is "<<*(p+2)<<endl;
	cout<<"The value of marks[3] is "<<*(p+3)<<endl;
	
	//pointer arithmetic
	cout<<*(p++)<<endl; //print the value of p and then will increment it by one
	cout<<*p;
}
