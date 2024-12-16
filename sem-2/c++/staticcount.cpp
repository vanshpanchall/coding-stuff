#include <iostream>
using namespace std;
int num;
class item
{
	static int count;

public:
	void getdata(int a)
	{
		a = num;
		count++;
	}
	static void getcount()
	{
		cout << "\ncount is: " << count;
	}
};
int item::count;
int main()
{
	item i1, i2, i3;
	i1.getcount();
	i2.getcount();
	i3.getcount();
	i1.getdata(123);
	item ::getcount();
	i2.getdata(67);
	item ::getcount();
	i3.getdata(45);
	item::getcount();
	return 0;
}
