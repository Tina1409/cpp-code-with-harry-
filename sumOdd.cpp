//PROGRAM TO CALCULATE SUM OF ODD NUMBERS BETWEEN 1 TO 15
#include<iostream>
using namespace std;
int main(){
	int i,sumOdd=0;
	for(i=1;i<=15;i++){
		if(i%2!=0){
			sumOdd=sumOdd+i;
		}
	}
	cout<<"The sum of Odd is: "<<sumOdd<<endl;
}
