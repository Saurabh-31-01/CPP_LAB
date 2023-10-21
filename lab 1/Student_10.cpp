#include <iostream>
using namespace std;


class student{
	
	int rollNo;
	string dob;
	int total_marks;
	
	
	public:
		void getData(){
		 cout<<"Enter a rollNo: ";
		 cin>>rollNo;
		 cout<<endl;
		 cout<<"Enter a dob: ";
		 cin>>dob;
		 cout<<endl;
		 cout<<"Enter a total_marks: ";
		 cin>>total_marks;
		 cout<<endl;
		}
	void display(){
		cout<<rollNo<<" "<<dob<<" "<<total_marks<<endl;
		cout<<endl;
	}	
};

int main(){
	
	int n;
	cout<<"Enter a number of student: "<<endl;
	cin>>n;
	student stu[n];
	for(int i=0;i<=n-1;i++){
		cout<<i<<". ";
		stu[i].getData();
		
	} 
	for(int i=0;i<=n-1;i++){
		stu[i].display();
	}
	return 0;
}
