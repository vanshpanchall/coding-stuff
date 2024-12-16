#include<iostream>
using namespace std;
class line
{
	double length;
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
	length=len;
}
double line::getlength()
{
	return length;
}
int main()
	{
	line line(60);
	line.setlength(90);
	cout<<"\nnew length is:"<<line.getlength();
	return 0;
}
 
