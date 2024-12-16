#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		void getdata(int a)
		{
		 this->a=a;
		}
		void show()
		{
			cout<<"value of a:"<<a;
		}
};
int main()
{
  A obja;
  obja.getdata(10);
  obja.show();
}
