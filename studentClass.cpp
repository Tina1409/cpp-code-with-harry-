#include<iostream>
using namespace std;
class student{
	private:
		long long int phoneNumber;
	public:
		int rollNumber;
		float mathsMarks,englishMarks;
		void marksInput();
		void marksDisplay(); 
};

void student :: marksInput(){
	cout<<"Enter maths marks: "<<endl;
	cin>>mathsMarks;
	cout<<"Enter english marks: "<<endl;
	cin>>englishMarks;
}

void student :: marksDisplay(){
	cout<<"Maths marks are: "<<mathsMarks<<endl;
	cout<<"English marks are: "<<englishMarks<<endl;
}
int main(){
	student tina;
	tina.marksInput();
	tina.marksDisplay();
	return 0;
}
