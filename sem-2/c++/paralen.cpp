#include<iostream>
using namespace std;
class line
{
	double len;
	public:
		void setlength(double len);
		double getlength();
		line (double len);
};
line::line(double len)
{
	cout<<"length is:"<<len;
}
void line::setlength(double len)
{
	len=len;
}
double line::getlength()

{
	line line (50.2);
	cout<<"length of line 1 is:"<<len;
	line.getlength();
	cout<<"length of line 2 is:"<<len;
	line.setlength(70);
	return 0;
}
 
