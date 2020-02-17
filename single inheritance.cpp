/*Create a abase class with data members name, gender, roll no. and another derived class physical fitness which should contain data members height and weight. Use getdata to get data from the user and display member function to display the entered details by user. Display all the information using objects of derived class only.*/

#include<iostream>
using namespace std;

class BI
{
	char name[10];
	char gen[10];
	int roll;
	
	public:
		void getdata()
		{
			cout<<"Enter your name: "<<endl;
			cin>>name;
			cout<<"Enter your gender: "<<endl;
			cin>>gen;
			cout<<"Enter your roll no. :"<<endl;
			cin>>roll;
			
		}
		void display()
		{
			cout<<"Your name is: "<<name<<endl;
			cout<<"you are "<<gen<<endl;
			cout<<"your roll no. is "<<roll<<endl;
		}
};

class PF: public BI
{
	float height, weight;
	
	public:
		void getdata()
		{
			cout<<"Enter your height"<<endl;
			cin>>height;
			cout<<"Enter your weight"<<endl;
			cin>>weight;
		}
		void display()
		{
			cout<<"your height is: "<<height<<endl;
			cout<<"your weight is: "<<weight<<endl;
		}
};

int main()
{
	PF ob1;
	ob1.BI::getdata();
	ob1.getdata();
	
	ob1.BI::display();
	ob1.display();
}
