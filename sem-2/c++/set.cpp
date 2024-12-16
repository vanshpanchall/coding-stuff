#include<iostream>
using namespace std;
class set
{
int m,n;
public:
	void input();
	void display();
	void largest();
};

void set::input()
{
cout<<"input values of m and n:";
cin>>m>>n;
}
void set::largest()
{ 
	cout<<"largest value="<<largest();
}

void set::display()
{
if(m>n)
return m; 
else
return n;
}

int main()
{
set A; 
A.input( ); 
A.display( );
return 0;
}
