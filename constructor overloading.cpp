#include<iostream>
using namespace std;

class Abc
{
  int a,b;
  public:
    Abc()
    {
    }
    Abc(int x, int y)
    {
      a=x;
      b=y;
     }
     Abc(Abc & t)
     {
      a=t.a;
      b=t.b;
     }
     ~Abc()
     {
         cout<<"Destructor";
     }
     void print();
 };
 void Abc::print()
 {
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
  }
  
  int main()
  {
    Abc o1(25,36);
    Abc o2=o1;
    o2.print();
   }
