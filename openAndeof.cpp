#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	ofstream out;
	out.open("tina.txt");
	out<<"This is me\n";
	out<<"me is tina\n";
	out.close();
	
	ifstream in;
	string st1,st2;
	in.open("tina.txt");
	//in>>st1>>st2;
	//cout<<st1<<st2;
	//eof --> end of file
	while(in.eof()==0){
		getline(in,st1);
		cout<<st1<<endl;
	}
	in.close();
	return 0;
}
