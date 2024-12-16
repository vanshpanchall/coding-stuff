#include<iostream>
using namespace std;
class item
{
	int code;
	float price;
	public:
		void getdata(int c, float p)
		{
		/*cout<<"value of code & price"<<endl;
	    cin>>code>>price;*/
	    code=c;
	    price=p;
		}
		void show()
		{
			cout<<"CODE:"<<code<<endl;
			cout<<"PRICE:"<<price<<endl;		
		}
};
int main()
{
	int code, price,size=2;
	item*p=new item[size];
	item*d=p;
	int x,i;
	float y;
	for(i=0;i<size;i++)
	{
		cout<<"value of code & price"<<endl;
		cin>>x>>y;
		p->getdata(x,y);
		p++;
		
	}
	for(i=0;i<size;i++)
	{
		
		d->show();
		d++;
	}
	return 0;
}

