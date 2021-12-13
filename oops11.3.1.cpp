#include<iostream>
using namespace std;
class A{
    public:
    int k;
    void display1()
    {
        cout<<"value of k in class A"<<k<<endl;
    }
};
class B:public A{
    public:
    void display2()
    {
        cout<<"value of k in class A"<<k<<endl;
    }
};
class C:public A{
    public:
    void display3()
    {
        cout<<"value of k in class A"<<k<<endl;
    }
};
class D:public B,public C{
    public:
    void display4(){
        
    }
};


int main()
{
    A obj1;
    B obj2;
    C obj3;
    D obj4;
    obj1.k=10;
    obj1.display1();
    obj2.k=20;
    obj2.display2();
    obj3.k=30;
    obj3.display3();
    obj4.k=40;
    obj4.display4();
    
}
