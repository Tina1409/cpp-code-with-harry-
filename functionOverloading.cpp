//FUNCTION OVERLOADING - SAME FUNCTION NAME FOR MORE THAN ONE FUNCTION
#include<iostream>
using namespace std;

int sum(int a,int b){
	cout<<"Using function with 2 arguments"<<endl;
	return a+b;
}

int sum(int a,int b,int c){
	cout<<"Using function with 3 arguments"<<endl;
	return a+b+c;
}

int main(){
	cout<<"The sum of 3 and 6 is"<<sum(3,6)<<endl;
	//it used the next function which is also of same name as first one
	cout<<"The sum of 3,6 and 7 is "<<sum(3,6,7)<<endl;
	return 0;
}
