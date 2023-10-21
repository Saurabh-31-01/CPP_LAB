#include <iostream>
using namespace std;

inline int add(int num1,int num2) {
  return(num1+num2);
}

int main(){
	int num1,num2;
	cout<<"Enter the 1 number : ";
	cin>>num1;
	cout<<"Enter the 2 number : ";
	cin>>num2;
	
	cout<<"addition of Number is: "<<add(num1,num2);
	return 0;
}
