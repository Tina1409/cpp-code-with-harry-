#include<iostream>
using namespace std;
int fib(int n){
	if(n<2){
		return 1;
	}
	return fib(n-2)+fib(n-1);
}
int main(){
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	cout<<"the number at "<<a<<"th position is: "<<fib(a)<<endl;
	
}
