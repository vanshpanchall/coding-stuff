#include<iostream>
using namespace std;
class demo
{
	float a;
	public:
		demo(){
		a=10.25;
	}
		operator int()
		{
			int x;
			x=a;
			return a;
		}
};
int main()
{
	demo d;
    int y=d;
    cout<<"the value is: "<<y;
	return 0;
}
