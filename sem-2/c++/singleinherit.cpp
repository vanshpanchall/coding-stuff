#include<iostream>
using namespace std;
class animal
{
	public:
		int legs=4;
		void display1()
		{
			cout<<legs<<endl;
		}
};
class racoon:public animal
{
	public:
		int tail=1;
		void display2()
		{
			cout<<tail<<endl;
		}
};
int main()
{
	animal a;
	racoon r;
	a.display1();
	r.display2();
	}
	
