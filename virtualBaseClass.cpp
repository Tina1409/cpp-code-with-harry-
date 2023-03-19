//VIRTUAL BASE CLASS -->IT WILL PROTECT US FROM AMBUIQUITY AND DUPLICACY
#include<iostream>
using namespace std;

//SYNTAX OF VIRTUAL BASE CLASS
// class B: virtual public A{
// 			....
//	};

//class C: virtual A{
//			......
//	};

/*
student --> Test
student --> sports

test --> result
sports --> result
*/

class Student{
	protected:
	int roll_no;
	public:
		void set_number(int a){
			roll_no=a;
		}
		void print_number(void){
			cout<<"Your roll no is "<<roll_no<<endl;
		}
};

class Test : virtual public Student{
	protected:
		float maths,physics;
		public:
			void set_marks(float m1,float m2){
				maths=m1;
				physics=m2;
			}
			
			void print_marks(void){
				cout<<"Your result is here: "<<endl;
				cout<<"Maths: "<<endl;
				cout<<"Physics: "<<endl;
			}
};

class Sports: public virtual Student{
	protected:
		float score;
	public:
		void set_score(float sc){
			score=sc;
		}
		
		void print_score(void){
			cout<<"Your PT score is: "<<score<<endl;
		}
};

class Result : public Test, public Sports{
	private:
		float total;
	public:
		void display(void){
			total=maths+physics+score;
			print_number();
			print_marks();
			print_score();
			cout<<"Your total score is: "<<total<<endl;
		}
};
int main(){
	Result tina;
	tina.set_number(4851);
	tina.set_marks(100,99);
	tina.set_score(10);
	tina.display();

	return 0;
}
