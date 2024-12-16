#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo(){}
		demo(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<"the value of a is :"<<a<<endl;
		}
};
int main()
{
	int m=20;
	demo d;
	d=m;
	d.display();
	return 0;
}
