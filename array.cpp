//ARRAYS
#include<iostream>
using namespace std;
int main(){
	//int marks[4]={100,99,45,89}; --> method 1 to declare
	int marks[]={100,99,45,89}; //--> methid 2 to declare
	marks[2]=100; //we can change the value of an element in an array
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	
	int mathMarks[4];  //--> method 3 to declare
	mathMarks[0]=78;
	mathMarks[1]=98;
	mathMarks[2]=68;
	mathMarks[3]=100;
	
	cout<<mathMarks[0]<<endl;
	cout<<mathMarks[1]<<endl;
	cout<<mathMarks[2]<<endl;
	cout<<mathMarks[3]<<endl;
	
	cout<<"USING FOR LOOP"<<endl;
	//for printing elements of an array using for loop
	for(int i=0;i<4;i++){
		cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
	}
	
	//using while loop
	cout<<"\n";
	cout<<"USING WHILE LOOP"<<endl;
	int i=0;
	while(i<4){
		cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
		i++;
	}
	
	cout<<"\n";
	cout<<"USING DO WHILE LOOP"<<endl;
	
	i=0; //we changed value because in while i has 4 as value so we need to change it to 0
	do{
		cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;
		i++;	
	}while(i<4);
	
	return 0;
}
