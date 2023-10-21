#include<iostream>
using namespace std;

class Add{
	public :
		
	template <class T>
	 T add(T& a, T& b){
		
		T result = a + b;
		return result;
	}
};

template <class T, class T1>
T1 addition(T& a, T1& b){
	
	T1 result = a + b;
	return result;
}

int main(){
	int a = 10;
	float b = 2.02;
//	Add a1;
//	int c = a1.add(a, b);
//	
//	cout << " Addition is : "<<c << endl;
	
	float d = addition(a, b);
	cout << "Addition is :- "<<d << endl;
}
