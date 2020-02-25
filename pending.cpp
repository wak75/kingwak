#include<iostream>
using namespace std;

class A
{
	int roll;
	char name[10];
	public:
		void getdata()
		{
			cout<<"Enter your name="<<endl;
			cin>>name;
			cout<<"Enter your roll no.= ";
			cin>>roll;
		}
		void display1()
		{
			cout<<"your name="<<name<<endl;
			cout<<"your roll no.="<<roll<<endl;
		}
		
};

class B: public A
{
	char father[10];
	public: 
	void getfather()
	{
		cout<<"enter your father name= ";
		cin>>father[10];
	}
	void display2()
	{
		cout<<"Your father is Mr. "<<father<<endl;
	}
};

class C: public A
{
	char mother[10];
	public:
		void getmother()
		{
			cout<<"Enter your mother's name = ";
			cin>>mother;
		}
		void display3()
		{
			cout<<"your mothe is Mrs "<<mother<<endl;
		}
};

class D:public C,public B
{
	public:
		void display()
		{
			/*A::display1();
			B::display2();
			C::display3();*/
			cout<<"your details are as follows :"<<endl;
		}
};

int main()
{
	D ob1;
	ob1.getdata();
	ob1.getfather();
	ob1.getmother();
	ob1.display();
	ob1.A::display1();
	ob1.B::display2();
	ob1.C::display3();
}
