#include<iostream>
using namespace std;


class Complex{
	int real, img;
	
	public: 
		Complex(int real, int img){
			this -> real = real;
			this -> img = img;
		}
		
		friend int operator==(Complex& c1, Complex& c2){
			
			if(c1.real == c2.real && c1.img == c2.img){
				return 1;
			}else{
				return 0;
			}
		}	
};
int main(){
	Complex c(10, 10);
	Complex c1(12, 10);
	
	if(c == c1){
		cout << "Both are equal" << endl;
	}
	else{
		cout << "Both are not equal" << endl;
	}
	
}
