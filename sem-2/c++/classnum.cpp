#include<iostream>
using namespace std;
class number
{
	int num,a;
    public:
    	number()
		{}
    	number(int num)
    	{
    		a=num;
		}
		number(number &obj)
	{
		cout<<"\ncopy constructor is called:"<<endl;
            //a=num;
    		a=obj.a;
}
    	void display()
    {
		cout<<"\nthe number for this subject is: "<<a;
    }
};
int main()
{
	number x(65),y(8),z(35);
	x.display();
	y.display();
	z.display();
	number z1(x);
	z1.display();
	number z2(y);
	z2.display();
	return 0;
	}
