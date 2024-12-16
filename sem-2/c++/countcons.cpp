#include<iostream>
using namespace std;
int count;
class num
{
	public:
		num()
		{
			count++;
			cout<<"\nConstructor is called: "<<count<<endl;
		}
		~num()
		{
			cout<<"\nDestructor is called: "<<count;
			count--;
		}
};
int main()
{
	cout<<"Inside main\n";
	cout<<"\nCreating objects:\n";
	num n1;
	{
		cout<<"\nCreating two objects:\n";
		num n2,n3;
		cout<<"\nBack to main\n";
	}
	
}
