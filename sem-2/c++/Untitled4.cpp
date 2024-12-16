#include<iostream>
using namespace std;
class car
{
	public:
	void show1()
	{
		cout<<"car"<<endl;
	}
};
class fuelcar
{
		public: car
		void show2()
		{
			cout<<"fuel car"<<endl;
		}
};
class electriccar
{
		public: car
		void show3()
		{
			cout<<"electric car"<<endl;
		}
};
class hybridcar:public electriccar ,public fuelcar
{
		void show4()
		{
			cout<<"hybrid car"<<endl;
		}
};
int main()
{
	hybridcar h;
	h.show1();
	h.show2();
	h.show3();
	h.show4();
	return 0;
}
