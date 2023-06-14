//CALCULATOR
#include<iostream>
#include<cctype>
using namespace std;
int main(){
	char choice;
	do{
		
		cout<<"******************************"<<endl;
		cout<<"1.Addition"<<endl;
		cout<<"2.Subtraction"<<endl;
		cout<<"3.Multiplication"<<endl;
		cout<<"4.Division"<<endl;
		cout<<"Q.Quit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		cout<<endl;

		switch(choice){
			case '1':
				int a,b,add;
				cout<<"you choose 1.. Addition"<<endl;
				cout<<"Enter two numbers separated by space ";
				cin>>a>>b;
				add=a+b;
				cout<<"the addition is "<<add<<endl;
				cout<<endl;
				break;
			case '2':
				int sub;
				cout<<"you choose 2.. Subtraction"<<endl;
				cout<<"Enter two numbers separated by space ";
				cin>>a>>b;
				sub=a-b;
				cout<<"the subtraction is "<<sub<<endl;
				cout<<endl;
				break;
			case '3':
				int mul;
				cout<<"you choose 3.. Multiplication"<<endl;
				cout<<"Enter two numbers separated by space ";
				cin>>a>>b;
				mul=a*b;
				cout<<"the Multiplication is "<<mul<<endl;
				cout<<endl;
				break;
			case '4':
				int div;
				cout<<"you choose 4.. Division"<<endl;
				cout<<"Enter two numbers separated by space ";
				cin>>a>>b;
				div=a/b;
				cout<<"the division is "<<div<<endl;
				cout<<endl;
				break;
			
			case 'Q':
				cout<<"Good Bye"<<endl;
				exit(0);
				
			case 'q':
				cout<<"Good Bye"<<endl;
				exit(0);
				
			default:
				cout<<"Enter a valid option."<<endl;
				break;
		}
	}while(choice == 'q' || choice == 'Q');

}
