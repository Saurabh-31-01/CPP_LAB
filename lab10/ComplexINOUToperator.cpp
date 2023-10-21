#include<iostream>
using namespace std;

class Complex{
	int img, real;
	
	public :

	
		friend void operator>> (istream& in , Complex& c){
			
		
			cout << "Enter the Real :- " << endl;
			
			in >> c.real;
			
			cout << "Enter the img :- " << endl;
			
			in >> c.img;
			
		}
		
		friend void operator<< (ostream& out, Complex& c){
			
			if(c.img > 0){
				out << c.real << " + " << c.img << "i " << endl;
			}else{
				out << c.real << " " << c.img << "i " << endl;
			}
		}
};

int main(){
	
	Complex c1;
	
	cin >> c1;
	
	cout << c1;
}
