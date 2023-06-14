//SELECTION CONTROL STRUCTURE
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Tell me your again"<<endl;
	cin>>age;
	if(age<18){
		cout<<"You cannot drink"<<endl;
	}
	else if(age==18){
		cout<<"you can drink but think twice before drinking"<<endl;
	}
	else{
		cout<<"You can drink but be in limit"<<endl;
	}
	return 0;
}
