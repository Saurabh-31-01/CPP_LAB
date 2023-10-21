#include<iostream>
#include <iomanip> 
using namespace std;
class cDate
{
	int dd,mm,yy;
	public:
		cDate();
		cDate(int dd,int mm,int yy);
		void display();
};
cDate::cDate(){}
cDate::cDate(int d,int m,int y)
{

	dd=d;
	mm=m;
	yy=y;
}
void cDate::display()
{
	cout<<"date : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}

class Student{
	
	public:
		
	int rollno;
	string name;
	int marks[5];
	double avg;
	cDate d;
	
	public :
		int getrollno(){
			return rollno;
		}
		
		double getAvg(){
			return avg;
		}
		
		Student(){}
		Student(int r, string name, int m[5], double avg, int dd,int mm,int yy):d(dd,mm,yy){
			this -> rollno = r;
			this -> name = name;
			this -> avg = avg;
			for(int i = 0; i < 5; i++){
				this -> marks[i] = m[i];
			}
		}
		
		void display(){
			cout << '\n' <<"roll no is :- "<< rollno << endl;
			cout << "name is :- " << name << endl;
			cout << "Marks are :- " << endl;
			
			for(int i = 0; i < 5; i++){
				cout << marks[i] << " ";
			}
			cout << endl;
			cout << "Avg is :- " << avg << endl;
			
			d.display();
			cout << '\n';
		}
		
};

void printObject(Student *arr){
	
	for(int i = 0; i < 3; i++){
		
		arr[i].display();
		
		cout << setw(50) << setfill('*');
	
	}
}

void sortArrayStudent(Student* arr){
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = i + 1; j < 3; j++)
		{
			if(arr[i].getAvg() > arr[j].getAvg())
			{
				Student temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
	}
}

int main(){
	int rollno, dd, mm, yy;
	string name;
	int arr[5];
	double avg;
	
	Student s[3];
	
	int i = 0;
	while(i < 3){
		
		cout << "Enter the roll no. :- " << endl;
		cin >> rollno;
		
		cout << "Enter name :- " << endl;
		cin >> name;
		
		cout << "Enter 5 subject marks :- " << endl;
		for(int j = 0; j < 5; j++){
			cin >> arr[j];
		}
		int sum = 0;
		for(int k = 0; k < 5; k++){
			sum += arr[k];
		}
		
		avg = (double) sum / 5;
		
		cout << "Enter Date :- " << endl;
		cin >> dd >> mm >> yy;
		
		s[i] = Student(rollno, name, arr, avg, dd, mm, yy);
		
		i++;
	}
	
	printObject(s);
	cout <<'\n' << "after sorting :- " << endl;
	cout << endl;
	
	sortArrayStudent(s);
	
	cout << endl;
	printObject(s);
	
}
