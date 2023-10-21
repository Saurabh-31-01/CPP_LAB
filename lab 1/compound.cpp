#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float principal,rate,time,ci;
	cout<<"enter the principal amount:"<<endl;
	cin>>principal;
	cout<<"enter the rate of interest:"<<endl;
	cin>>rate;
	cout<<"enter the time period in year:"<<endl;
	cin>>time;
	
	float a=pow((1+rate/100),time);
	ci=(principal*a)-principal;
	cout<<"compound interest:"<<ci<<endl;
	return 0;
}
