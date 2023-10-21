#include<iostream>
using namespace std;

class Complex{
	int img, real;
	
	public: 
		
		void display(){
			
			if(img > 0){
				cout << real << " + " << img << "i " << endl;
			}else{
				cout << real << "  " << img << "i " << endl;
			}
			
		}
		
		Complex(){
		}
		Complex(int r, int i){
			real = r;
			img = i;
		}
		
		Complex operator++ (){
			
			Complex temp;
			
			temp.real = ++this -> real;
			temp.img = ++this -> img;
			
			return temp;
		}
		
		Complex operator++(int){
			
			Complex temp = *this;
			
			++this -> real;
			++this -> img;
			
			return temp;
		}

};

int main(){
	
	Complex c1(5, 6);
	c1.display();
	
	Complex c2 = ++c1;
	c2.display();
	
	Complex c3(1, 2);
	
	Complex c4 = c3++; // c3.operator++(0)
	c4.display();
	c3.display();
	
}
