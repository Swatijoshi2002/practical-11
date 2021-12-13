#include<iostream>
using namespace std;
class mammals{
    public:
    void display1()
    {
        cout<<"I am mammal"<<endl;
    }
};
 class marine_animal{
    public:
    void display2()
    {
        cout<<"I am marine animal"<<endl;
    }
};   
class bluewhale:public mammals,public marine_animal{
    public:
    void display3()
    {
        cout<<"I belong to both"<<endl;
    }
};
int main()
{
  mammals obj1;
  marine_animal obj2;
  bluewhale obj3;
  obj1.display1();
  obj2.display2();
  obj3.display3();
  cout<<"calling using obj of bluewhale"<<endl;
  obj3.mammals::display1();
  obj3.marine_animal::display2();
    
}
