//scope resolution operator
#include<iostream>
using namespace std;
int sum=20;
int main(){
	int num1;
	int num2,sum;
	cout<<"Enter the value of num1: \n";
	cin>>num1;
	
	cout<<"Enter the value of num2: \n";
	cin>>num2;
	
	sum=num1+num2;
	
	cout<<"The sum is "<<sum<<endl;
	cout<<"The global value of sum is: "<<::sum;
	return 0;

}
