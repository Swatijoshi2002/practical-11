#include<iostream>   
using namespace std;
class A {
     public:
     int x;
     int y;
};
class B:public A{
    public:
    void display(){
    x=20;   //inheritance
    y=10;
    cout<<x<<" "<<y;
}
};
int main()
{
B obj;
obj.x=30;
obj.y=40;
obj.display();
}
