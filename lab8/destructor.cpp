#include<iostream>
using namespace std;
class A
{
	public:
		~A(){
			cout<<"destructor of A:"<<endl;
		}
};
class B:public A
{
	public:
		~B()
		{
			cout<<"destructor of B:"<<endl;
		}
};
int main()
{
	A* a=new B();
	delete a;
}

