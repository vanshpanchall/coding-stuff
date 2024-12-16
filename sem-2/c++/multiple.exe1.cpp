#include<iostream>
#include<string.h>
using namespace std;
class vehicle
{
	public: 
	char name[20];
	void setname(char n[20])
	{
		strcpy(name,n);
		
	}
	void getname()
	{
		cout<<"vehicle name:"<<name<<endl;
		
	}

};
class wheels:public vehicle
{ 
    public: 
     int wheels;
	void setwheels(int w)
	{
		wheels=w;
	}
	void getwheels()
	{
		cout<<"wheels are:"<<wheels<<endl;
	}

};
class car :public wheels {
	public:
	void setdetails(char name[20],int wheels)
	{
		setname(name);
		setwheels(wheels);
	}
	void getdetails()
	{
		getname();
		getwheels();
	}
};
int main()
{
	car c;
	c.setdetails("BMW",4);
	c.getdetails();
	return 0;
}
