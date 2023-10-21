#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"default constructor of A:"<<endl;
		}
		class B
		{
			public:
				B()
				{
					cout<<"default constructor of B:"<<endl;11111111111111
				}
				static void display(){
					cout << "in static display function" << endl;
				}
				
				void add(){
					cout << "In the add " << endl;
				}
				~B()
				{
					cout<<"	destructor of B:"<<endl;
				}
		};
		~A()
		{
			cout<<"	destructor of A:"<<endl;
		}
		
	
};
int main()
{
	//	A aobj;
	//A aobj;
	A :: B b;
	b.add();
}
