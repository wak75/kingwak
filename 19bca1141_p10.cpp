#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream f1;
	f1.open("work.txt");
	char ch[50];
	int x=0,i;
	while(!f1.eof())
	{
		f1.getline(ch,50,'.');
		for(i=0;i<=50;i++)
		{
			if(ch[i]=='A')
			{
				x++;	
			}	
		}
	}
	cout<<x;
}
