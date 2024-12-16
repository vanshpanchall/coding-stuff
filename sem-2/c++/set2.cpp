#include <iostream>
using namespace std; 
class set
{
int m,n,o;
void input();
void display ();
void largest();
};
void set::input()
{
cout<<"input values of mand n:";
cin>>m>>n;
}
void set::display()
{
	cout<<"largest value:";
	largest();
}
void set::largest(void)
{
	if(m>n)
	cout<<m;
	else
	cout<<n;
}
int main()
{
set A; 
A.input( ); 
A.display();
}
