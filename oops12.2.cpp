#include<iostream>
using namespace std;
class A{
    public:
     A()
    {
        cout<<"Constructor of class A is called"<<endl;
    }
    ~A()
    {
        cout<<"Destructor of class A is called"<<endl;
    }
    
};
class B{
    public:
     B()
    {
        cout<<"Constructor of class B is called"<<endl;
    }
    ~B()
    {
        cout<<"Destructor of class B is called"<<endl;
    }
};
class C{
    public:
    C()
    {
        cout<<"Constructor of class C is called"<<endl;
    }
    ~C()
    {
        cout<<"Destructor of class C is called"<<endl;
    }
};

int main()
{

    A obj1;
    B obj2;
    C obj3;
}
