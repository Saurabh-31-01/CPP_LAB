#include<iostream>
using namespace std;
template<class T,class T1> 
class Add
{
	T a;
	T1 b;
	
	public : 
	
	Add(T a, T1 b){
		this -> a = a;
		this -> b = b;
		
		cout << a + b;
	}
	
};
int main()
{
	Add<int,double> a(10,30.2);
}
