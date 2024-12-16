#include<iostream>
using namespace std;
int main()
{
	int a,count=0;
	cout<<"Enter the number";
	cin>>a;
	while (a>0)
	{
		a=a/10;
		count++;
	}
	cout<<"Number of digits:"<<count++;
	return 0;
}
