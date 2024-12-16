#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"base class method\n";
		}
};
class B:public A
{
	public:
		void display()
		{
			cout<<"child class method\n";
		A::display();
		}
};
int main()
{
    B b;
 	A a;
 	b.display();
	return 0;
}

