#include<iostream>
using namespace std;


void usrConcat(char *,char *);
int main()
{
	char a[10];
	char b[10];
	cout<<"Enter a first string: ";
	cin>>a;
	cout<<"Enter a second string: ";
	cin>>b;
	usrConcat(a,b);
	cout<<"Concated string is: "<<a;
	
	
}
    void usrConcat(char *p,char *q)
{
      while(*++p);
      while(*p++=*q++);   	
}
