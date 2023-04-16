#include<iostream>
using namespace std;

template <class T>
class Tina{
	public:
		T data;
		Tina(T a){
			data=a;
		}
		void display();
};

template<class T>
void Tina<T>:: display(){
	cout<<data;
}

void func(int a){
	cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func(T a){
	cout<<"I am templatised func() "<<a<<endl;
}

int main(){
//	Tina <int> t(5);
//	cout<<t.data<<endl;
//	t.display();
	
	func(4); //Exact match takes the higher priority
	func(4.6);	
	return 0;
	
}
