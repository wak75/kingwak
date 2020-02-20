/*Design 3 classes, 1.student, 2.exam ,3.results.
class student contain data members: ->Name, ->Roll No.
class exam contain:-> marks of 6 subject.
class results contain: ->data member which shows an average of all of your 6 subjects as well as your details.*/

#include<iostream>
using namespace std;

class student
{
	int roll;
	char name[10];
	
	public:
	void getdata()
	{
		cout<<"Enter your name: "<<endl;
		cin>>name;
		cout<<"Enter your Roll no.:"<<endl;
		cin>>roll;
	}
	void display()
	{
		cout<<"your name is: "<<name<<endl;
		cout<<"your Roll no. is: "<<roll<<endl;
	}
};

class exam: public student
{
	public:
	int m1,m2,m3,m4,m5,m6;
	
	void getdata1()
	{
		cout<<"Enter your marks of subject 1: "<<endl;
		cin>>m1;
		cout<<"Enter your marks of subject 2: "<<endl;
		cin>>m2;
		cout<<"Enter your marks of subject 3: "<<endl;
		cin>>m3;
		cout<<"Enter your marks of subject 4: "<<endl;
		cin>>m4;
		cout<<"Enter your marks of subject 5: "<<endl;
		cin>>m5;
		cout<<"Enter your marks of subject 6: "<<endl;
		cin>>m6;
	}
	void display1()
	{
		//void display();
		cout<<"Marks for Subject 1 is: "<<m1<<endl;
		cout<<"Marks for Subject 2 is: "<<m2<<endl;
		cout<<"Marks for Subject 3 is: "<<m3<<endl;
		cout<<"Marks for Subject 4 is: "<<m4<<endl;
		cout<<"Marks for Subject 5 is: "<<m5<<endl;
		cout<<"Marks for Subject 6 is: "<<m6<<endl;
	
	}
};

class results:public exam
{
	public:
	float res()
	{
	float c=(m1+m2+m3+m4+m5+m6)/6;
	}
	void final()
	{
		//void display1();
		cout<<"final average marks of 6 subjects are: "<<res()<<endl;
	}
};

int main()
{
	results ob1;
	ob1.getdata();
	ob1.getdata1();
	ob1.display();
	ob1.display1();
	ob1.res();
	ob1.final();
}
