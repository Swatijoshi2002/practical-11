#include<iostream>
using namespace std;
class A {
    public:
    int x;
     void DISPLAY()
     {
         cout<<"updated of x and y in class A "<<x<<" "<<y<<endl;
     }
    protected:
    int y;
    
    private:
    int z;
};
class B:protected A{
    public:
    //z=30;  z is private data member in A hence its scope is till A
    void display()
    {
    x=20;
    y=100;
    cout<<"updated of x and y in class B "<<x<<" "<<y<<endl;
        
    }
};
class C :private B{
public:
       void display1()
    {
    x=60;
    y=80;
    cout<<"updated value of x and y in class c "<<x<<" "<<y<<endl;
        
    }
};
int main()
{
    A obj1;
    obj1.x=10; 
    // since y is protected initially garbage value will be assigned  to it
     cout<<"updating value of x and y using obj of class A "<<endl;
     obj1.DISPLAY();
     B obj2;
     obj2.display();
     C obj3;
     obj3.display1();
    
}
