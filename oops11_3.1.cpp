#include<iostream>
using namespace std;

class A
{
	private:
		int z;
	protected:
	      int y;
	public:
		int x;
};

class B : private A
{
	public:
		void display()
		{
			x = 10;
			y = 20;
			//z = 30	//z is private in class A
			cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
		}
};

class C: public B
{
	//display();
};

int main()
{
	B obj;
       obj.x = 10;
	//obj.y = 200;	//Protected Member Cannot be access therough object 
	obj.display();
	return 0;
}
