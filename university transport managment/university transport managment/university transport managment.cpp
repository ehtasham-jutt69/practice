#include<iostream>
#include<string>
using namespace  std;
class person
{
		string name;

	public:
		person (string s ) :name(s)
		{

		}
		person(){}
		void printp()
		{
			cout << "person name  is " << name << endl;
		}
};
class bus
{
	int busNo =0;
public:
	bus() {}
	void setbus(int a) 
	{
		busNo = a;
	}
	void printb()
	{
		cout << " bus number is " << busNo << endl;
	}
	virtual void printdd(){}
};
class driver :public person
{
	int age;
public:
	driver(string n, int a) :person(n), age(a)
	{

	}

	//driver() {}
	void printd()
	{
		printp();
		cout << "age is " << age << endl;
	}

};
class destination:public bus
{
	string location;
	
	driver d;

public:
	destination(string d ,string n, int a) :location(d),d(n , a )
	{

	}
	void printdd()
	{
		cout << "destination is " << location << endl;
		d.printd();
		printb();
	}



};
class student:public person
{

	int student_id = 0;
	string Department;
public:
	void setdepartment(string depart) 
	{
		Department = depart;
	}
	void setID(int id) 
	{
		student_id =id;
	}
	string name;

	void printinformation()
	{
		cout << "Department of student is : " << Department << endl;
		cin >> name;
		string arr[10]{ "stop 1" ,"stop 2" ,"stop 3" ,"stop 4" ,"stop 5" ,"stop 6","stop 7" ,"stop 8" ,"stop 9" ,"stop10" };
		for (int i = 0; i < 10; i++)
		{
			cout << i + 1 << ":-" << arr[i] << endl;
		}
		cout << "enter your STOP's INDEX " << endl;


	}
};

int main()
{
	//destination d1("Barakahu ", "asad ", 23, 1234);
//	bus* d1 = new destination("Barakahu ", "asad", 23);
//	d1->setbus(12);
	//d1->printdd();
	student s;
	
	s.printinformation();
/*	for (int i = 0; i < 4; i++)
	{
		cout << "Enter name of student " << i + 1 << " is : ";
		cin >> depart;
		cout << "Enter ID of student " << i + 1 << " is : ";
		cin >> id;

		s[i].setdepartment(depart);
		s[i].setID(id);
	}
	cout << "---------------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		s[i].prints();5

	}*/
}

