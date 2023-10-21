#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout<<"enter the numbers:"<<endl;
	cin>>argc;
	cout<<"you have Entered "<<argc<<" integers :"<<"\n";
	 for(int i=0;i<argc;i++)
	 {
	 	cout<<argv[i]<<"\n";
	 	cout<<"r";
	 	return 0;
	 }
}
