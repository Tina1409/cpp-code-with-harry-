#include<iostream>
#include<fstream>

/*
The useful classes for working with files in c++ are:
1.fstreambase
2.ifstream --> derived from fstreambase
3.ofstream --> derived from fstreambase

In order to work with files in c++, you will have to open it.Primarily, there are 2 ways to open
1. Using the constructor
2. Using the member function open() of the class

*/

using namespace std;
int main(){
	/*
	string st="tina";
	//opening files using constructor and reading it
	ofstream out("tina.txt"); //write operation
	out<<st;
	*/
	
	string st2;
	ifstream in("tina.txt");
	in>>st2; //it will only read first word --no space and enter words are read
	getline(in,st2); //to read whole line
	cout<<st2;
	return 0;
}
