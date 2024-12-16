#include<iostream>
using namespace std;
class shape
{
	protected:
	int width,length,height;
	public:
		void setwidth(int w)
		{
			width=w;
		}
		void setlength(int l)
		{
			length=l;
		}
		void setheight(int h)
		{
			height=h;
		}
};

class paintcost
{
    public:
    	int getcost(int area)
    	{
    		return area*50;
		}
	
};

class rectangle:public shape,public paintcost
{
	public:
		int getarea()
		{
			return width*height*length
			;
		}
};
int main()
{
	rectangle r;
	r.setwidth(20);
	r.setlength(10);
	r.setheight(30);
	cout<<"the area is: "<<r.getarea();
	cout<<"\nthe cost is: "<<r.getcost(r.getarea());
	return 0;
}
