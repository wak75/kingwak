#include<iostream>
using namespace std;

class abc
{
    int a,b,c;
    public:
    abc()
    {
        
    }
    abc(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
    abc(abc & t)
    {
        a=t.a;
        b=t.b;
    }
    void print();
    
    ~abc()
    {
        cout<<"destructor"<<endl;
    }
};

void abc::print()
{
    cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<endl;
}

int main()
{
    abc a1(26 ,54, 35);
    abc a2=a1;
    a2.print();
}
