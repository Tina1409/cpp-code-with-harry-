#include<iostream>
using namespace std;
void swap(int* a,int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a=4,b=5;
	cout<<"The value of a is: "<<a<<". The value of b is: "<<b<<endl;
	swap(a,b); //it will not swap the values
	cout<<"The value of a is: "<<a<<". The value of b is: "<<b<<endl;
	
	return 0;
}
