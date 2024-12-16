#include<iostream>
using namespace std;
class alpha
{
	int a;
	public:
		alpha(int x)
		{
			a=x;
		}
		int getvalue()
		{
			return a;
		}
};
class beta
{
	int b;
	public:
		beta(int x)
		{
			b=x;
		}
		int getvalue()
		{
			return b;
		}
		beta (alpha temp){
		
			b=temp.getvalue();
		}
			operator alpha()
			{
				return alpha(b);
			}
		
};
int main()
{
	alpha obja(10);
	beta objb(obja);
	beta obj1(20);
	obja=objb;
	cout<<"value is: "<<obj1.getvalue();
}
