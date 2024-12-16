#include<iostream>
using namespace std;
class B
{
	protected:  //access modifier
		int a; 
	public:
		
		int b;
		void getab()
		{
			a=50;
			b=5;
	
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
		int get_a1()
		{
			return a;
		}
};
int main(){
	D d;
	d.getab();
//	d.a=30;
	d.mul();
	d.get_a1();
	d.display();
}
