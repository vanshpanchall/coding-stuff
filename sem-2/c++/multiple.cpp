#include<iostream>
using namespace std;
class a
{
	public:
		void show1()
		{
			cout<<"class person " <<endl;
			
		}
		
};
class b:public a
{
	public:
		void show2()
		{
			cout<< "class student"<< endl;
			
		}

};
class c:public b
{
	public:
		void show3()
		{
			cout<<"class b.tech students"<< endl;
			
		}
};
int main()
{
 c a;
 a.show1();
 a.show2();
 a.show3();
}
