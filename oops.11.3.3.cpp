#include<iostream>
using namespace std;
class A{
    public:
    int k;
    
};
class C{
    public:
    int k;
};
class D:public A,public C{
    public :
};

int main()
{

    D obj;
    //obj.k=10;
   obj.A::k=20;   //value of D is setting 
  cout<<obj.A::k<<" ";
   obj.C::k=30;   //value of D is setting 
  cout<<obj.C::k;
}
