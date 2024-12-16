#include <iostream>
using namespace std;
class area
{
	char area[20];
	int length;
	int breadth;

public:
	void getdata();
	void display();
}; // :: is called the space resolution operator
void area::getdata()
{
	cout << "enter length:\n";
	cin >> length;
	cout << "enter breadth:\n";
	cin >> breadth;
}
void area::display()
{
	cout << "\length is:\n"
		 << length;
	cout << "\nbreadth is:\n"
		 << breadth;
	cout << "\narea is:" << length * breadth;
}
int main()
{
	area A;
	A.getdata();
	A.display();
	return 0;
}
