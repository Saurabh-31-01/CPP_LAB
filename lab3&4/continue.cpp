#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int num=4;
	int i=3;
	while(i<=-5)
	{
		if(i==0)
		{
			continue;
		}
		num=num/i;
		i--;
	}
	cout<<"sum="<<sum<<endl;
	return 0;
}
