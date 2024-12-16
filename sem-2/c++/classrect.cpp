#include<iostream>
using namespace std;
class shape
{
	protected:
		int width;
		int height;
		public:
			void setwidth(int w)
			{
				width=w;
			}
			void setheight(int h)
			{
			height=h;
			}
};
class rectangle:public shape
{
	public:
		int getArea()
		{
			return width*height;
		}
};
int main()
{
	rectangle rect;
	rect.setwidth(100);
	rect.setheight(200);
	cout<<"total area:"<<rect.getArea()<<endl;
}
