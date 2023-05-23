//PROGRAM THAT FNDS THE SUM OF POSITIVE NUMBERS
#include<iostream>
using namespace std;
int main(){
	int i,num,sumPositive=0;
	
	for(i=1;i>0;i++){
		cout<<"Enter a number: "<<endl;
		cin>>num;
		if(num<0){
			break;
		}
		else{	
			sumPositive=sumPositive+num;
		}
	}
	cout<<"The sum of positive numbers is: "<<sumPositive<<endl;
}
