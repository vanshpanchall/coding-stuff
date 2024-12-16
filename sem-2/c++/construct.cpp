#include<iostream>
using namespace std;
class person
{
	char name[10];
	int age;
	public:
		person()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<"enter age:";
			cin>>age;
		}
		void display();
};
void person::display()
{
	cout<<"name is:"<<name;
	cout<<"\nage is:"<<age;
}
int main()
{
	person P;
	P.display();
	return 0;
}
