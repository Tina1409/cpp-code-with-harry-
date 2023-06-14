#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main(){
	int x=4,y=5;
	cout<<"The value of a is: "<<x<<". The value of b is: "<<y<<endl;
	swap(x,y); //it will not swap the values
	cout<<"The value of a is: "<<x<<". The value of b is: "<<y<<endl;
	
	return 0;
}
