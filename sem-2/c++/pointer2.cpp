#include<iostream>
using namespace std;
int main()
{
	int n[]={56,57,58,59,60};
	int i, *ptr;
	for (i=0;i<5;i++)
	{
		cout<<n[i]<<endl;
	}
	ptr=n;
	cout<<"value of ptr: "<<*ptr<<endl;
	ptr++;
	cout<<"value of ptr: "<<*ptr<<endl;
	ptr--;
	cout<<"value of ptr: "<<*ptr<<endl;
	return 0;
}
