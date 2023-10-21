#include<iostream>
using namespace std;
class Employee
{
	int id;
	public:
		Employee()
		{
			cout<<"hellow"<<endl;
		}
		Employee(int);
		void display();
		virtual int findsalary()=0;
		
};
Employee::Employee(int id)
{
	cout<<"para employee:"<<endl;
	this->id=id;
}
void Employee::display()
{
	cout<<"display of employee:"<<id<<endl;
}
class Wagesemployee:public Employee
{
	int hrs,rate;
	public:
		Wagesemployee();
		Wagesemployee(int,int,int);
		void display();
		int findsalary();
};
Wagesemployee::Wagesemployee()
{
	cout<<"default waesemployee:"<<endl;
	hrs=0;
	rate=0;
}
Wagesemployee::Wagesemployee(int hrs,int rate,int id):Employee(id)
{
	cout<<"para Wagesemployee:"<<endl;
	this->hrs=hrs;
	this->rate=rate;
}
int Wagesemployee::findsalary()
{
	return hrs*rate;
}
void Wagesemployee::display()
{
	Employee::display();
	cout<<hrs;
	cout<<rate;
}
class Salesmaneger:public Wagesemployee
{
	int sale,comm;
	public:
		Salesmaneger();
		Salesmaneger(int,int,int,int,int);
		void display();
		int findsalary();
};
Salesmaneger::Salesmaneger()
{
	cout<<"default "<<endl;
	sale=0;
	comm=0;
}
Salesmaneger::Salesmaneger(int id,int hrs,int rate,int sale,int comm):Wagesemployee(hrs,rate,id)
{
	cout<<"parameterize:"<<endl;
	this->sale=sale;
	this->comm=comm;
}
void Salesmaneger::display()
{
	Wagesemployee::display();
	cout<<"sales="<<sale<<endl;
	cout<<"comm:"<<comm<<endl;
}
int Salesmaneger::findsalary()
{
	return (Wagesemployee::findsalary())+sale*comm;
}
int main()
{
	Employee* ptr=new Wagesemployee();
	ptr->findsalary();
	return 0;
}
