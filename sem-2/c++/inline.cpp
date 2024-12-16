#include<iostream>
using namespace std;
inline float add(float x, float y)
{
	return (y+x);
}
inline double sub(double p, double q)
{
	return (p-q);
}
int main()
{
	float x,y;
	cout<<"\nenter x:";
    cin>>x;
	cout<<"\nenter y:";
	cin>>y;
	cout<<add(x,y);
	float p,q;
	cout<<"\nenter p:";
	cin>>p;
	cout<<"\nenter q:";
	cin>>q;
	cout<<sub(p,q);
}

