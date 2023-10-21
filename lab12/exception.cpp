#include<iostream>
using namespace std;
float division(int x,int y)
{
	if(y==0)
		{
			throw"you cant divide any number by zero";
		}
	return (x/y);
}
int main()
{
	int i,j;
	float z=0;
	cout<<"enter i&j value:"<<endl;
	cin>>i>>j;
	try {
		z=division(i,j);
		cout<<"answer:"<<z<<endl;
	}
	catch(const char*w)
	{
		cout<<w<<endl;
	}
}
