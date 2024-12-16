#include<iostream>
using namespace std;
class B;
class A
{
	int numA;
	public:
		void setA()
		{ numA=10;
	}
	friend int sub(A a,B b);
};
class B
{
		int numB;
	public:
		void setB()
		{ numB=12;
	}
	friend int sub(A a,B b);
};
int sub(A a,B b)
{return (a.numA-b.numB);
}
int main(){
	A a;
	B b;
	a.setA();
	b.setB();
	cout<<"the sum is:"<<sub(a,b);
	return 0;
}

