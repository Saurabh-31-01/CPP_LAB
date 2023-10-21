#include<iostream>
using namespace std;
#include<string.h>

class String1{
	
	int len;
	char *ptr;
	
	public: 
		String1(String1&)
		{
			cout<<"copy constructor is called";
		}
		
		String1& operator= (String1& str){
			
			len = str.len;
			
			delete[] ptr;
			
			ptr = new char[len + 1];
			
			strcpy(ptr, str.ptr);
			
			return *this;
			
		}
		
		void display(){
			cout << ptr << endl;
		}
		
		String1(){}
		String1(char *ptr){
			
			this -> len = strlen(ptr);
			
			this -> ptr = new char[len + 1];
			
			strcpy(this -> ptr, ptr);
		}	
};

int main(){
	
	String1 s1("hello");
	String1 s2("bro");
	
	s2 = s1;
	
	s2.display();
	
	String1 s3 = s2; // String1 s3(s2)
	
}
