#include<iostream>
using namespace std;

class Date1{
	int dd, mm, yy;
	
	public: 
		void display(){
			cout << dd << "/" << mm << "/" << yy << endl;
		}
		
		Date1(){}
		
		Date1(int d, int m, int y){
			dd = d;
			mm = m;
			yy = y;
		}
		
		friend void operator+(Date1& d, int a){
			
			d.dd = d.dd + a;
			d.mm = d.mm + a;
			d.yy = d.yy + a;
			
		}
		
		friend void operator-(Date1& d, int a){
			
			d.dd = d.dd - a;
			d.mm = d.mm - a;
			d.yy = d.yy - a;
			
		}
		
		
};

int main(){
	
	cout << "old date" << endl;
	Date1 d1(12, 4, 2023);
	d1.display();
	
	
	d1 + 5;
	cout << "new date" << endl;
	d1.display();
	
	cout << "old date" << endl;
	Date1 d2(11, 5, 2023);
	d2.display();
	d2 - 3;
	
	cout << "new date" << endl;
	d2.display();
	
}
