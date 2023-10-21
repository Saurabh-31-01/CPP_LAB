#include<iostream>
#include<string.h>
using namespace std;
class Library
{
	protected :
		char lname[20];
		public:
			Library();
			Library(char*);
			void display();
};
Library::Library()
{
	cout<<"default library name:"<<endl;
	strcpy(lname,'\0');
}
Library::Library(char* ch)
{
	cout<<"parameterize constructor of Library"<<endl;
		strcpy(lname,ch); 
}
void Library::display()
{
	cout<<lname<<endl;
}
class Distributor: virtual public Library
{
	protected:
		char dname[20];
	public:
		void display();
		Distributor();
		Distributor(char *);
};

Distributor :: Distributor(){
	cout << "Inside default of Distributor" << endl;
	strcpy(dname, "\0");
}

Distributor :: Distributor(char * d){
	cout << "Inside parametrized of Distributor" << endl;
	strcpy(dname, d);
}

void Distributor :: display(){
	cout << dname << endl;
}

class Author : virtual public Library{
	protected:
		char aname[20];
	public:
		void display();
		Author();
		Author(char *);
};

Author :: Author(){
	cout << "Inside default of Author" << endl;
	strcpy(aname, "\0");
}

Author :: Author(char  * a){
	cout << "Inside parameterized of Author "  << endl;
	strcpy(aname, a);
}

void Author :: display(){
	cout << aname << endl;
}

class Book : public Distributor, public Author{
	protected : 
		char bname[20];
	public: 
		void display();
		Book();
		Book(char *, char *, char *, char *);
};

Book :: Book(){
	cout << "Inside default of Book" << endl;
	strcpy(bname, "\0");
}

Book :: Book (char * b, char * d, char * a, char * l) : Distributor(d), Author(a), Library(l){
	cout << "Inside parameterized of Book" << endl;
	strcpy(bname, b);
}

void Book :: display(){
	
	Library::display();
	Distributor::display();
	Author::display();
	
	cout << bname << endl;
}

int main()
{
	Book b("helo", "bro" , "yo " , "cpp");
	b.display();
}
