#include<iostream>
using namespace std;
void swap(int a,int b);
int main()
{
int a=10,b=20;
cout<<"value of a & b before call: "<<a<<" "<<b<<endl;
swap(a,b);
cout<<"value of a & b after call: "<<a<<" "<<b<<endl;
}
void swap(int a,int b)
{
	int temp;
	temp=b;
	b=a;
	a=temp;
	cout<<"value of a & b in function: "<<a<<" "<<b<<endl;
}
