#include<iostream>
using namespace std;
class A{
    public:
    int k;
    void display1()
    {
        cout<<"value of k in class A "<<k<<endl;
    }
};
class B:virtual public A{
    public:
    void display2()
    {
        cout<<"value of k in class B "<<k<<endl;
    }
};
class C:virtual public A{
    public:
    void display3()
    {
        cout<<"value of k in class C "<<k<<endl;
    }
};
class D:public B,public C{
    public:
    void display4(){
        cout<<"value of k in class D "<<k<<endl;
    }
};


int main()
{
    A obj1;
    B obj2;
    C obj3;
    D obj4;
    cout<<"removing ambiguity error using virtual base class"<<endl;
    obj1.k=10;
    obj1.display1();
    obj2.k=20;
    obj2.display2();   // no problem in inheriting class A members in class B and C values can be easily updated
    obj3.k=30;
    obj3.display3();
    obj4.k=40;         //will get ambiguity error which is resolved my using virtual base class
    obj4.display4();
    
}
