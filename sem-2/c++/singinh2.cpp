#include<iostream>
using namespace std;
class B
{
	int a;
	public:
		int b;
		void getab()
		{
			a=20;
			b=6;
	
		}
		int get_a()
		{
			return a;
		}
		void show_a(){} 
};
 
class D:public B
{
	int c;
	public:
		void mul()
		{
			c=b*get_a();
		}
		void display()
		{
			cout<<"Value of a is: "<<get_a()<<endl;
			cout<<"Value of b is: "<<b<<endl;
			cout<<"Value of c is: "<<c<<endl;
		}
};
int main(){
	D d;
	d.getab();
	d.mul(); 
	d.show_a();
	d.display();
}
