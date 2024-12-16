#include<iostream>
using namespace std;
class demo
{
	static int x;
	public:
		static void function()
		{
			cout<<"value of x:"<<x;
		}
};
int demo::x=16;
int main()
{
	demo d;
	d.function();
	return 0;
}
