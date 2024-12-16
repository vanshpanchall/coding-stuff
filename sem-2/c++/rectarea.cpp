#include<iostream>
using namespace std;
class area
{
	char area;
	int l;
	int b;
	public:
	void getdata();
	void display();
}; // (::) - is called the space resolution operator
void area::getdata()
{
	cout<<"enter length in cm:\n";
	cin>>l;
	cout<<"enter breadth in cm:\n";
	cin>>b;
}
void area::display()
{
	cout<<"\length is:\n"<<l;
	cout<<"\nbreadth is:\n"<<b;
	cout<<"\n area is:"<<l*b;
}
int main()
{
	area A;
	A.getdata();
	A.display();
	return 0;
}
