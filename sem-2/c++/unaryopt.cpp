#include <iostream>
using namespace std;
class demo
{
	int x, y, z;

public:
	void getdata(int a, int b, int c);
	void display();
	void operator-();
};
void demo::getdata(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}
void demo::display(void)
{
	cout << "" << x;
	cout << " " << y;
	cout << " " << z << endl;
}
void demo::operator-()
{
	x = -x;
	y = -y;
	z = -z;
}
int main()
{
	demo d;
	d.getdata(10, -20, 45);
	cout << "d:";
	d.display();
	-d;
	cout << "-d";
	d.display();
	return 0;
}
