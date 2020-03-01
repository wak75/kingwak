//virtual function

#include<iostream>
using namespace std;
class A
{
	public:
	int a=10,b=20;
	
		void getdata()
		{
			cout<<"A="<<a<<" "<<"B="<<b<<endl;
		}
		
		void print()
		{
			cout<<"The values of A and B are(1): "<<a<<"  "<<b<<endl;
		}
};

class B:public A
{
	public:
		void getdata()
		{
			cout<<"I am best"<<endl;
		}
		
		void print()
		{
			cout<<"really I am ";	
		}
};

int main()
{
	A *p;
	B ob1;
	/*ob1.getdata();
	ob1.print();*/
	p=&ob1;
	p->getdata();
	p->print();
	
}
