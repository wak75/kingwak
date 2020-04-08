//multiple exception 
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cout<<"Enter the value of A: ";
	cin>>a;
	cout<<"Enter the value of B: ";
	cin>>b;
	
	try
	{
	
		if(a==0)
		{	
			throw (c);
		}
		else
		{
			c=a/b;
			cout<<"value is: "<<c;
			
		}
	}
	
	catch (char c)
	{
		cout<<"Character type exception";
	}
	catch (int i)
	{
		cout<<"Integer type exception";
	}
	catch (float f)
	{
		cout<<"Float type exception";
	}
}
