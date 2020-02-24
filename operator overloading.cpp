#include<iostream>
using namespace std;

class A
{
	int h,m,s;
	public:
		void getdata()
		{
			cout<<"Enter the hour: ";
			cin>>h;
			cout<<"Enter the minutes: ";
			cin>>m;
			cout<<"Enter the seconds: ";
			cin>>s;
		}
		void display()
		{
			cout<<"The hours are:"<<h<<endl;
			cout<<"The minutes are:"<<m<<endl;
			cout<<"The seconds are:"<<s<<endl;
		}
		
		A operator + (A o)
		{
			A temp;
			temp.h=h+o.h;
			temp.m=m+o.m;
			temp.s=s+o.s;
			
			if(temp.s>=60)
			{
				temp.s-=60;
				temp.m++;
			}
			if(temp.m>=60)
			{
				temp.m-=60;
				temp.h++;
			}
			return temp;
		}
};


int main()
{
	A ob1, ob2, ob3;
	ob1.getdata();
	ob2.getdata();
	ob3=ob1+ob2;
	ob3.display();

}
