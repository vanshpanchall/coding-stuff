#include <iostream>
using namespace std; 
class set
{
int m,n,o;
public:
void input();
void display ();
void smallest();
};
void set::input()
{
cout<<"input values of mand n:";
cin>>m>>n;
}
void set::display()
{
	cout<<"smallest value:";
	smallest();
}
void set::smallest(void)
{
	if(m<n)
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
