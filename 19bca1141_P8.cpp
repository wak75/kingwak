//test 2 nested class 
#include<iostream>
using namespace std;

class student
{
	public:
		class address
		{
			int H_N;
			char city[10];
			public:
				void get_add()
				{
					cout<<"Enter your City: ";
					cin>>city;
					cout<<"Enter you House Number: ";
					cin>>H_N;
				}
				void show_add()
				{
					cout<<"Your City is : "<<city<<" "<<"and your House Number is "<<H_N<<endl;
				}
		};
		
		class result
		{
			int marks;
			address a1;
			
			public:
				void getdata()
				{
					a1.get_add();
					cout<<"Enter your Total Marks: ";
					cin>>marks;
					
				}
				
				void showdata()
				{
					a1.show_add();
					cout<<"The marks you have entered are: "<<marks;
				}
				
		};
};

int main()
{
	student::result ob1;
	ob1.getdata();
	ob1.showdata();
}
