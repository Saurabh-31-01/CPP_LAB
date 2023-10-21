#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the value of a&b:"<<endl;
	cin>>a>>b;
	cout<<"before swap the numbers: "<<"a="<<a<<'\t'<<"b="<<b<<endl;
	c=b;
	b=a;
	a=c;
	cout<<"after swaping the numbers: "<<"a="<<a<<'\t'<<"b="<<b<<endl;
	return 0;
}
