//STRUCT
#include<iostream>
using namespace std;

//struct student{
//	long long int rollNumber;
//	float marks; 
//};

typedef struct student{
	long long int rollNumber;
	float marks; 
}stu;

int main(){
	//struct student s1;
	stu s1;
	s1.rollNumber= 2210994851;
	s1.marks=100;
	cout<<"Roll number is: "<<s1.rollNumber<<endl;
	return 0;	
}
