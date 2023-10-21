#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int sum=0;
	int i=0;
	do
	{
		sum=sum+i;
		i++;
	}while(i<=a);
	cout<<"sum="<<sum<<endl;
	return 0;
}
