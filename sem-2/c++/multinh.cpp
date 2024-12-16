#include<iostream>
using namespace std;
class A
{
	public:
		void display1()
		{
			cout<<"outside class A:"<<endl;
		}
};
class B
{
	public:
		void display2()
		{
			cout<<"outside class B:"<<endl;
		}
};
class C:public B,public A
{
	public:
		void display3()
		{
			cout<<"outside class C:"<<endl;
		}
};
int main()
{
	C c;
	c.display1();
	c.display2();
	c.display3();
	return 0;
}
