#include<iostream>
using namespace std;
class staticdemo
{
	public:
		static int count;
};
int staticdemo::count=16;
int main()
{
	cout<<"value of count is: "<<staticdemo::count;
}

