#include<iostream>
using namespace std;

class B;
class A
{
	int a;
	public:
		void getdata()
		{
			cout<<"Enter the value of a: ";
			cin>>a;
		}
		friend void sum(A ob1, B ob2);
};

class B
{
	int b;
	public:
		void getdata()
		{
			cout<<"Enter the value of b: ";
			cin>>b;
		}
		friend void sum(A o1, B o2);
		 
};

void sum(A o1, B o2)
{
	cout<<"Sum ="<<o1.a+ o2.b;
}

int main()
{
	A ob1;
	B ob2;
	ob1.getdata();
	ob2.getdata();
	sum(ob1, ob2);
	
}
