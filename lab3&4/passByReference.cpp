#include<iostream>
using namespace std;
void swap(int *a,int* b);
int main()
{
int a=10,b=20;
swap(&a,&b);
cout<<"value of a & b: "<<a<<" "<<b<<endl;
}
void swap(int *a,int* b)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}
