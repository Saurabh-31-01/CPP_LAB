#include<iostream>
using namespace std;

class Time{
	int hh, mm, ss;
	
	public: 
		void display(){
			cout << hh << " : " << mm << " : " << ss << endl;
		}
		
		friend void operator+(Time&, int);
		friend void operator-(Time&, int);
	
		Time(){
		}
		
		Time(int h, int m, int s){
			hh = h;
			mm = m;
			ss = s;
		}
};

void operator+(Time& t, int a){
	t.hh = t.hh + a;
	t.mm = t.mm + a;
	t.ss = t.ss + a;
}

void operator-(Time& t, int a){
	t.hh = t.hh - a;
	t.mm = t.mm - a;
	t.ss = t.ss - a;
}

int main(){
	Time t1(12, 23, 26);
	t1.display();
	
	t1 + 5;
	t1.display();
	
	t1 - 3;
	t1.display();
}
