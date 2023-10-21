#include<iostream>
using namespace std;

template <class t>
void fun(t& a, t& b){
	
	t temp = a;
	a = b;
	b = temp;
	
}

int main(){
	char* a = "saurabh"; 
	char* b = "bhavesh";
	
	cout << "Before Swapping :- " << a << " " <<b << endl;
	
	fun(a, b);
	
	cout << "After Swapping :- " << a << " " << b << endl;
}
