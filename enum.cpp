//ENUM
#include<iostream>
using namespace std;

enum meal{
	breakfast,
	lunch,
	dinner
};
int main(){
//	cout<<"The integer value for breakfast is: "<<breakfast<<endl;
//	cout<<"The integer value for lunch is: "<<lunch<<endl;
	meal m1=lunch; //--> method 2
	cout<<m1;
	return 0;
}
