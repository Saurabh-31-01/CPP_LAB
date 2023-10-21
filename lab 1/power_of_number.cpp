#include<iostream>
using namespace std;
int main()
{
 	int base,exponent;
 	int power=1;
 	int i=1;
	cout<<"enter the base and exponent:"<<endl;
	cin>>base>>exponent;
	while(i<=exponent)
	{
		power=base*power;
		i++;
	}
	cout<<"power= "<<power<<endl;
	return 0;
}
