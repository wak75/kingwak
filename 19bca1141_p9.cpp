//dynamic memory allocation program
#include<iostream>
using namespace std;

int  main()
{
	int *p = new int[5];
	int sum=0,i;
	cout<<"Enter the values: ";
	for (i=0;i<5;i++)
	{
		cin>>p[i];
		
	}
	for (i=0;i<5;i++)
	{
		sum=sum + *(p+i);
		
	}
	cout<<sum;
	
	
	delete []p;
}
