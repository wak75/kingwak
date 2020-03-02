#include<iostream>
using namespace std;

void fun(int a, int b, int n)
{
	int i,c;
	
	c=a+b;
	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	
	for(i=0;i<=n-2;i++)
	{
		cout<<c<<" ";
		a=b;
		b=c;
		c=a+b;
		
		
	}
}

int main()
{
	int x,y,z;
	
	cout<<"enter the value of 2 numbers: ";
	cin>>x>>y;
	
	cout<<"Upto where you want to add: ";
	cin>>z;
	
	fun(x,y,z);
}
