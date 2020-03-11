//Nested class example:

#include<iostream>
using namespace std;

class students
{
	private:
		int uid;
		char name[10];
		
		class address
		{
			private:
				int HN;
				char city[20];
				
				public:
					void get_add()
					{
						cout<<"Enter the House no.: ";
						cin>>HN;
						cout<<"Enter the city: ";
						cin>>city;
					}
					void print_add()
					{
						cout<<"Your house no. is: "<<HN<<endl;
						cout<<"Your city is: "<<city<<endl;
					}
		};
		
		
		public:
		address a1;
		
		void getdata()
		{
			cout<<"Enter your UID: ";
			cin>>uid;
			cout<<"Enter your name: ";
			cin>>name;
			a1.get_add();
		}
		void print()
		{
			cout<<"your name is :"<<name<<endl;
			cout<<"your uid is : "<<uid<<endl;
			a1.print_add();
		}
		
};

int main()
{
	students s1;
	s1.getdata();
	s1.print();
}
