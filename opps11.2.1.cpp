#include<iostream>
using namespace std;
class mammals{
    public:
    void display()
    {
        cout<<"I am mammal"<<endl;
    }
};
 class marine_animal{
    public:
    void display1()
    {
        cout<<"I am marine animal"<<endl;
    }
};   
class bluewhale:public mammals:public marine_animal{
    public:
    void display3()
    {
        cout<<"I belong to both"<<endl:
    }
}
int main()
{
  mammals obj;
  marine_animal obj1;
  bluewhale obj3;
  obj.display();
  obj1.display();
  obj2.display3();
  cout<<"calling using obj of bluewhale"<<endl;
  obj2.mammals::display();
  obj2.marine_animals::display1();
    
}
