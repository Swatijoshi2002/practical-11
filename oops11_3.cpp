#include<iostream>   
using namespace std;
class A {
     public:
     int x;
    protected:
     int y;
    private:
 int z;
};
class B:public A{
    public:
    void display(){
    x=20;
    y=10;
   // z=30;// error as scope of z is in class A
    cout<<x<<" "<<y<<endl;
}
};
class C:public B{
   public:
 void  display1(){
  // using class c accessing members
   x=30;
    y=100;
cout<<x<<" "<<y<<endl;
    display();
}
};
int main()
{
B obj;
obj.x=30;
//obj.y=40; will not acess through object
//obj.z=80; error it cannot be accesed through other class object as it is private
obj.display();
C obj1;
obj1.display1();
}
