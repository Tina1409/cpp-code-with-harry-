#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an assosiative array
int main(){
	map<string, int> marksMap;
	marksMap["Tina"]=98;
	marksMap["Jack"]=59;
	marksMap["Rohan"]=2;
	
	map<string,int> :: iterator iter;
	for(iter=marksMap.begin();iter!=marksMap.end();iter++){
		cout<<(*iter).first<< " "<<(*iter).second<<"\n";
	}
	return 0;
}
