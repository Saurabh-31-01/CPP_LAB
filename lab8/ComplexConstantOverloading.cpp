#include<iostream>
using namespace std;

class Complex{
	int real, img;
	
	public: 
		
		void display(){
			
			if(img > 0){
				cout << real << " + " << img << "i " << endl;
			}else{
				cout << real << " " << img << "i " << endl;
			}
		}
		
		Complex(){
		}
		
		Complex(int r, int i){
			real = r;
			img = i;
		}
		
		friend Complex operator+(Complex& s, int a){
			
			Complex temp;
			
			temp.real = s.real + a;
			temp.img = s.img + a;
			
			return temp;
		}
		
		friend Complex operator-(Complex& s, int a){
			
			Complex temp;
			
			temp.real = s.real - a;
			temp.img = s.img - a;
			
			return temp;
		}
};

int main(){
	
	Complex c1(4, 5);
	c1.display();
	
	Complex c2 = c1 + 5;
	c2.display();
	
	Complex c3(2, 3);
	c3.display();
	
	Complex c4 = c3 - 1;
	c4.display();
	
}
