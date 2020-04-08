#include<iostream>
using namespace std;

int main()
{
    int a, b, c, x;
    cout<<"Enter the value of A: ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;

	try
	{
		if((a-b)!=0)
		{
			x=c/(a-b);
			cout<<"Result is:"<<x;
		}
		else
		{
			throw(a-b);
		}
	}  
	catch(int i)
	{
		cout<<"Answer is infinite because a-b is:"<<i;
	}     
    
}
