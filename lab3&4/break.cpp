#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int sum=0;
	int i=0;
	while(i<=a)
	{
		if(i==5)
		{
			break;
		}
		sum=sum+i;
		i++;
	}
	cout<<"sum="<<sum<<endl;
	return 0;
}
