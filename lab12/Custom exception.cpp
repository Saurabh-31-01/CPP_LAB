#include<iostream>
using namespace std;

class MyException : public exception{
	public:
		const char* what() const throw(){
			return "Trying to divide by zero";
		}
};

int main(){
	try{
		int x, y;
		cout << "Enter two numbers :" << endl;
		
		cin >> x >> y;
		
		if(y == 0){
			MyException e;
			throw e;
		}else{
			cout << "x / y = " << x / y << endl;
		}
	}catch(exception& a){
		cout << a.what();
	}
}
