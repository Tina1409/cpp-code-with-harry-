//UNION
#include<iostream>
using namespace std;

union money{
	int rice;
	char car;
	float pounds;
};

int main(){
	union money m1;
	m1.rice=34;
	m1.car='c';
	cout<<"The value of rice is : "<<m1.rice<<endl; //it will produce a garbage value as union rice is over written with car
	cout<<"The value of car is : "<<m1.car<<endl;
	return 0;	
}
