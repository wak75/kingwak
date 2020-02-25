//static variable program
#include<iostream>
using namespace std;

class A
{
	private:
		int a;
		static int b;
		public:
			void getdata(int x)
			{
				a=x;
				
			}
			static void getdata1(int y)
			{
				b=y;
			}
			void diaplay()
			{
				cout<<"a="<<a<<endl;
				cout<<"static b="<<b;
			}
};

int A::b;

int main()
{
	A ob1, ob2;
	ob1.getdata(5);
	A::getdata1(8);
	ob2.getdata(26);
	ob1.diaplay();
	ob2.diaplay();
}
