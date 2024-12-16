#include<iostream>
using namespace std;
class increment
{
	int n,t;
	public:
		void getdata()
		{
			cout<<"enter the number: "<<endl;
			cin>>n;
		}
		void display()
		{
			cout<<"the post increment of given number is:"<<++n;
		}
};
int main(){
	increment i;
	i.getdata();
	i.display();
	return 0;
}
