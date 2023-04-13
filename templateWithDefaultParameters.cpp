#include<iostream>
using namespace std;

template<class T1=int,class T2=float>

class Tina{
	public:
		T1 a;
		T2 b;
		
		Tina(T1 x,T2 y){
			a=x;
			b=y;
		}
		
		void display(){
			cout<<"the value of a is "<<a<<endl;
			cout<<"the value of b is "<<b<<endl;
		}
};

int main(){
	Tina<> t(4,5.6);
	t.display();
	
	Tina<float,char> i(1.4,'n');
	i.display();
	return 0;
}
